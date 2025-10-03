#include <cstdio>


// Пятью пять - двадцать пять!
int main(int argc, char** argv)
{
    long long a = 0;
    scanf_s("%lld", &a);

    long long n = a / 10;
    long long square = n * (n + 1);
    long long result = square * 100 + 25;

    printf("%lld", result);
    return 0;
}