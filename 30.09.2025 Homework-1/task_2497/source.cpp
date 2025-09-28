#include <cstdio>
#include <fstream>
#include <stdio.h>


// A+B+C
int main(int argc, char** argv)
{
    long long A;
    long long B;
    long long C;
    scanf_s("%lld %lld %lld", &A, &B, &C);

    long long sum = A + B + C;
    printf("%lld", sum);

    return 0;
}