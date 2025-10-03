#include <cstdio>


// Том и Джерри
int main(int argc, char** argv)
{
    long long n = 0;
    long long m = 0;
    scanf_s("%lld %lld", &n, &m);

    long long answer = n * m - 1;
    printf("%lld", answer);

    return 0;
}