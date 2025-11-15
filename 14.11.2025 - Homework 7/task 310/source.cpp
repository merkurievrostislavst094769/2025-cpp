#include <cstdio>

bool prime_or_composite(long long n) 
{
    long long i = 0;

    if (n == 2) 
    {
        return true;
    }

    if (n % 2 == 0) 
    {
        return false;
    }

    i = 3;
    while (i * i <= n) 
    {
        if (n % i == 0) 
        {
            return false;
        }
        i += 2;
    }

    return true;
}

int main(int argc, char** argv)
{
    long long n = 0;
    int result = 0;

    scanf_s("%lld", &n);

    result = prime_or_composite(n);

    if (result) 
    {
        printf("prime\n");
    }
    else 
    {
        printf("composite\n");
    }

    return 0;
}