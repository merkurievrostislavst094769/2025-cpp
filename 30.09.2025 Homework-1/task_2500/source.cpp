#include <cstdio>
#include <fstream>
#include <stdio.h>


// Строки в книге
int main(int argc, char** argv)
{
    int K;
    int N;
    scanf_s("%d %d", &K, &N);

    int page = (N - 1) / K + 1;
    int stroka = (N - 1) % K + 1;

    printf("%d %d", page, stroka);
    return 0;;
}