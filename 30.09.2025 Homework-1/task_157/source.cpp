#include <cstdio>


// Ã ¿ƒ
int main(int argc, char** argv)
{
    long long v = 0;
    long long t = 0;
    scanf_s("%lld %lld", &v, &t);

    long long d = v * t;
    long long p = ((1 + d) % 109 + 109) % 109;
    long long answer = p + 109 * (p == 0);

    printf("%lld", answer);
    return 0;
}