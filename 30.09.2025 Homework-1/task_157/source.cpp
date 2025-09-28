#include <cstdio>
#include <fstream>
#include <stdio.h>


// Ã ¿ƒ
int main(int argc, char** argv)
{
    long long V;
    long long T;
    scanf_s("%lld %lld", &V, &T);

    long long d = V * T;
    long long p = ((1 + d) % 109 + 109) % 109;
    long long answer = p + 109 * (p == 0);

    printf("%lld", answer);
    return 0;
}