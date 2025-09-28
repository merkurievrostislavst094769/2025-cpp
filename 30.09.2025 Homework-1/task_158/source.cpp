#include <cstdio>
#include <fstream>
#include <stdio.h>


// Дележ яблок
int main(int argc, char** argv)
{
    long long N;
    long long K;
    scanf_s("%lld %lld", &N, &K);

    long long apples = K / N;
    long long basket = K % N;
    long long less = K % N;

    printf("%lld %lld %lld", apples, basket, less);
    return 0;
}