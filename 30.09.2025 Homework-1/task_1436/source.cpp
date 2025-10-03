#include <cstdio>


// Остаток от деления
int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    scanf_s("%lld %lld", &a, &b);

    long long absb = b >= 0;

    long long r = (a % b + absb) % absb;
    printf("%lld", r);

    return 0;
}