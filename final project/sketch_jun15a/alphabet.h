int A[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 1, 0, 0, 0, 0, 0, 0, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int B[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int C[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 1, 1, 1, 0, 0, 1, 1, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int D[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int E[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int F[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int G[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 1, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int H[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int I[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int J[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 1, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int K[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 1 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int L[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1 },
    { 0, 1, 1, 1, 1, 1, 1, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int M[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 1 },
    { 0, 1, 1, 1, 1, 1, 1, 1 },
    { 0, 1, 1, 0, 1, 0, 1, 1 },
    { 0, 1, 1, 0, 1, 0, 1, 1 },
    { 0, 1, 1, 0, 1, 0, 1, 1 },
    { 0, 1, 1, 0, 0, 0, 1, 1 },
    { 0, 1, 1, 0, 0, 0, 1, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int N[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 1, 1 },
    { 0, 1, 1, 1, 0, 0, 1, 1 },
    { 0, 1, 1, 1, 1, 0, 1, 1 },
    { 0, 1, 1, 1, 1, 0, 1, 1 },
    { 0, 1, 1, 0, 1, 1, 1, 1 },
    { 0, 1, 1, 0, 1, 1, 1, 1 },
    { 0, 1, 1, 0, 0, 0, 1, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};
int O[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int P[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int Q[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 1, 1, 0, 0, 1, 0, 1, 1 },
    { 1, 1, 0, 0, 0, 1, 1, 1 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int R[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 1 },
    { 0, 1, 1, 0, 0, 0, 0, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int S[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int T[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 0, 1, 1, 0, 1, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int U[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int V[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int W[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 0, 1, 0, 1, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 1, 0, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int X[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 0, 0, 1, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 1, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int Y[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1 },
    { 0, 1, 1, 0, 0, 1, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int Z[9][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};
