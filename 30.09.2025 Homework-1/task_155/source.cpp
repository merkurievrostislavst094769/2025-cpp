#include <cstdio>


// Сумма цифр числа
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);

    int d1 = n / 100;
    int d2 = (n / 10) % 10;
    int d3 = n % 10;

    int sum = d1 + d2 + d3;
    printf("%d", sum);
    return 0;
}