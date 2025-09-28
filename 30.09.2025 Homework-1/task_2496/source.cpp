#include <cstdio>
#include <fstream>
#include <stdio.h>


// Сокращение перемен
int main(int argc, char** argv)
{
    int K;
    scanf_s("%d", &K);

    int result = (K - 1) * 5;
    printf("%d", result);

    return 0;
}