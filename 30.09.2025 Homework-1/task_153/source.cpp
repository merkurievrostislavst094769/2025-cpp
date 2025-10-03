#include <cstdio>


// Последняя цифра
int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);

    int last = n % 10;
    printf("%d", last);
    return 0;
}