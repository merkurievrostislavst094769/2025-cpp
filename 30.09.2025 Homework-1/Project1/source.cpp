#include <cstdio>
#include <fstream>
#include <stdio.h>

// A+B
int main(int argc, char** argv)
{
    long long A;
    long long B;
    scanf_s("%lld %lld", &A, &B);
    long long sum = A + B;
    printf("%lld", sum);
    return 0;
}