#include "alphabet.h"

int CH[9][8];
void setup() {
    Serial.begin(9600);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop() {
    String enter;
    char ch;
    int flag = 0;
    while (Serial.available() > 0) {
    enter = Serial.readString();
    Serial.print("entered word : ");
    Serial.println(enter);
    flag = 1;
    }
    if(flag == 1){
    for (int j = 0; j < enter.length() - 1; j++) {
        ch = enter[j];
        set(ch);
        for(int i = 8; i >= 0; i--) {
            if(CH[i][0] == 1)
                digitalWrite(13, HIGH);
            else
                digitalWrite(13, LOW);
    
            if(CH[i][1] == 1)
                digitalWrite(12, HIGH);
            else
                digitalWrite(12, LOW);
            
            if(CH[i][2] == 1)
                digitalWrite(11, HIGH);
            else
                digitalWrite(11, LOW);
            
            if(CH[i][3] == 1)
                digitalWrite(10, HIGH);
            else
                digitalWrite(10, LOW);
            
            if(CH[i][4] == 1)
                digitalWrite(9, HIGH);
            else
                digitalWrite(9, LOW);
            
            if(CH[i][5] == 1)
                digitalWrite(8, HIGH);
            else
                digitalWrite(8, LOW);
            
            if(CH[i][6] == 1)
                digitalWrite(7, HIGH);
            else
                digitalWrite(7, LOW);
                
            if(CH[i][7] == 1)
                digitalWrite(6, HIGH);
            else
                digitalWrite(6, LOW);
            delay(500);
            if (i == 0)
                delay(2000);
        }
    }
  }
}

void set(char c) {
    switch (c) {
        case 'A': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = A[i][j];
            break;
        case 'B': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = B[i][j];
            break;
        case 'C': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = C[i][j];
            break;
        case 'D': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = D[i][j];
            break;

        case 'E': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = E[i][j];
            break;
        case 'F': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = F[i][j];
            break;
        case 'G': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = G[i][j];
            break;
        case 'H': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = H[i][j];
            break;
        case 'I': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = I[i][j];
            break;
        case 'J': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = J[i][j];
            break;
        case 'K': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = K[i][j];
            break;
        case 'L': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = L[i][j];
            break;
        case 'M': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = M[i][j];
            break;
        case 'N': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = N[i][j];
            break;
        case 'O': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = O[i][j];
            break;
        case 'P': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = P[i][j];
            break;
        case 'Q': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = Q[i][j];
            break;
        case 'R': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = R[i][j];
            break;
        case 'S': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = S[i][j];
            break;
        case 'T': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = T[i][j];
            break;
        case 'U': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = U[i][j];
            break;
        case 'V': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = V[i][j];
            break;
        case 'W': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = A[i][j];
            break;
        case 'X': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = X[i][j];
            break;
        case 'Y': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = Y[i][j];
            break;
        case 'Z': 
            for (int i = 0; i <= 8; i++)
                for (int j = 0; j < 8; j++)
                    CH[i][j] = Z[i][j];
            break;
    }
}
