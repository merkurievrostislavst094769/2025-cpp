#include <cstdio>


// Дележ яблок
int main(int argc, char** argv)
{
    long long n = 0;
    long long k = 0;
    scanf_s("%lld %lld", &n, &k);

    long long apples = k / n;
    long long basket = k % n;
    long long less = k % n;

    printf("%lld %lld %lld", apples, basket, less);
    return 0;
}