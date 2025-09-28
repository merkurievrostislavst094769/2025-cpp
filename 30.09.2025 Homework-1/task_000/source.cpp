#include <cstdio>
#include <fstream>
#include <stdio.h>


// Ёни€
int main(int argc, char** argv)
{
    int N;
    int A;
    int B;
    scanf_s("%d %d %d", &N, &A, &B);

    int S = A * B;
    int totalS = N * S;
    int BS = totalS * 2;
    printf("%d", BS);
    return 0;
}