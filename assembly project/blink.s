PIO_PER equ 0x400E0E00
PIO_OER equ 0x400E0E10	
PIO_SODR equ 0x400E0E30	
PIO_CODR equ 0x400E0E34
	area mucode, code, readonly
	export __main
	entry
	
__main
	bl enable_pio
loop
	bl led3_on
	bl led2_on
	bl led1_on
	bl delay
	bl led1_off
	bl delay
	bl led2_off
	bl led1_on
	bl delay
	bl led1_off
	bl delay
	bl led3_off
	bl led2_on
	bl led1_on
	bl delay
	bl led1_off
	bl delay
	bl led2_off
	bl led1_on
	bl delay
	bl led1_off
	bl delay
	b loop
	
	
enable_pio	
	mov r4, #2_111
	ldr r5, =PIO_PER
	str r4, [r5]
	ldr r5, =PIO_OER
	str r4, [r5]
	bx lr
	
led1_on
	mov r4, #2_1
	ldr r5, =PIO_SODR
	str r4, [r5]
	bx lr

led1_off
	mov r4, #2_1
	ldr r5, =PIO_CODR
	str r4, [r5]
	bx lr
	
led2_on
	mov r4, #2_10
	ldr r5, =PIO_SODR
	str r4, [r5]
	bx lr
	
led2_off
	mov r4, #2_10
	ldr r5, =PIO_CODR
	str r4, [r5]
	bx lr

led3_on
	mov r4, #2_100
	ldr r5, =PIO_SODR
	str r4, [r5]
	bx lr
	
led3_off
	mov r4, #2_100
	ldr r5, =PIO_CODR
	str r4, [r5]
	bx lr


delay
	mov r8, #0
	ldr r9, =0x00F000
	
delay_loop
	add r8, r8, #1
	cmp r8, r9
	bne delay_loop
	bx lr
	
	end
	
	

	