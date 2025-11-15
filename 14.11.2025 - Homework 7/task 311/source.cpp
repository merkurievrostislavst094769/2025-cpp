#include <cstdio>

double fast_power(double a, int n) 
{
    if (n == 0)
    {
        return 1.0;
    }

    if (n % 2 == 0) 
    {
        double half = 0.0;
        half = fast_power(a, n / 2);
        return half * half;
    }
    else 
    {
        return a * fast_power(a, n - 1);
    }
}

int main(int argc, char** argv) 
{
    double a = 0.0;
    int n = 0;

    scanf_s("%lf %d", &a, &n);

    double result = 0.0;
    result = fast_power(a, n);

    printf("%.10g\n", result);

    return 0;
}
