#include <cstdio>


// A+B+C
int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    long long c = 0;
    scanf_s("%lld %lld %lld", &a, &b, &c);

    long long sum = a + b + c;
    printf("%lld", sum);

    return 0;
}