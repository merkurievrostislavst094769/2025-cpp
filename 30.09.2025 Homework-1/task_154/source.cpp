#include <cstdio>


// Число десятков
int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);

    int tens = (n / 10) % 10;
    printf("%d", tens);
    return 0;
}