#include <cstdio>

int phi(int n) 
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    else 
    {
        return phi(n - 1) + phi(n - 2);
    }
}

int main(int argc, char** argv) 
{
    int n = 0;

    scanf_s("%d", &n);

    int result = 0;
    result = phi(n);

    printf("%d\n", result);

    return 0;
}
