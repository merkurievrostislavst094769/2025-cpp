#include <cstdio>
#include <fstream>
#include <stdio.h>


// ����� ��������
int main(int argc, char** argv)
{
    long long N;
    scanf_s("%lld", &N);

    int tens = (N / 10) % 10;
    printf("%d", tens);
    return 0;
}