#include <cstdio>
#include <fstream>
#include <stdio.h>


// Том и Джерри
int main(int argc, char** argv)
{
    long long N;
    long long M;
    scanf_s("%lld %lld", &N, &M);

    long long answer = N * M - 1;
    printf("%lld", answer);

    return 0;
}