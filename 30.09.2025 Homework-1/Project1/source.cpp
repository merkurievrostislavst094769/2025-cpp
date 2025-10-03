#include <cstdio>

// A+B
int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    scanf_s("%lld %lld", &a, &b);
    long long sum = a + b;
    printf("%lld", sum);
    return 0;
}