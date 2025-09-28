#include <cstdio>
#include <fstream>
#include <stdio.h>


// Проверьте делимость
int main(int argc, char** argv)
{
    int a;
    int b;
    scanf_s("%d %d", &a, &b);

    int c = (a % b == 0) || (b % a == 0);
    int answer = c + (1 - c) * 2;

    printf("%d", answer);
    return 0;
}