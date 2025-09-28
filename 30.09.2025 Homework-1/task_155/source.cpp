#include <cstdio>
#include <fstream>
#include <stdio.h>


// Сумма цифр числа
int main(int argc, char** argv)
{
    int N;
    scanf_s("%d", &N);

    int d1 = N / 100;
    int d2 = (N / 10) % 10;
    int d3 = N % 10;

    int sum = d1 + d2 + d3;
    printf("%d", sum);
    return 0;
}