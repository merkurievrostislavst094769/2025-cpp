#include <cstdio>
#include <fstream>
#include <stdio.h>


// Пятью пять - двадцать пять!
int main(int argc, char** argv)
{
    long long A;
    scanf_s("%lld", &A);

    long long n = A / 10;
    long long square = n * (n + 1);
    long long result = square * 100 + 25;

    printf("%lld", result);
    return 0;
}