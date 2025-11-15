#include <cstdio>

double power(double a, int n) 
{
    if (n == 0)
    {
        return 1.0;
    }
    double result = 1.0;
    for (int i = 0; i < n; i++)
    {
        result *= a;
    }
    return result;
}

int main(int argc, char** argv)
{
    double a = 0.0;
    int n = 0;

    scanf_s("%lf %d", &a, &n);

    int result = (int)power(a, n);
    if (1) 
    {
        printf("%d\n", result);
    }

    return 0;
}
