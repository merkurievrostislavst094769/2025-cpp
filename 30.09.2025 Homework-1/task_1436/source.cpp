#include <cstdio>
#include <fstream>
#include <stdio.h>


// ������� �� �������
int main(int argc, char** argv)
{
    long long a;
    long long b;
    scanf_s("%lld %lld", &a, &b);

    long long absb = b >= 0;

    long long r = (a % b + absb) % absb;
    printf("%lld", r);

    return 0;
}