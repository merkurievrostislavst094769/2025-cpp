#include <cstdio>
#include <fstream>
#include <stdio.h>


// Последняя цифра
int main(int argc, char** argv)
{
    long long N;
    scanf_s("%lld", &N);

    int last = N % 10;
    printf("%d", last);
    return 0;
}