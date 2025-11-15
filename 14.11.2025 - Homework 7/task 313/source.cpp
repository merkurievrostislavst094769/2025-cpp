#include <cstdio>

int cnk(int n, int k) 
{
    if (k == 0) 
    {
        return 1;
    }
    if (k == n)
    {
        return 1;
    }
    else 
    {
        return cnk(n - 1, k - 1) + cnk(n - 1, k);
    }
}

int main(int argc, char** argv) 
{
    int n = 0;
    int k = 0;

    scanf_s("%d %d", &n, &k);

    int result = 0;
    result = cnk(n, k);

    printf("%d\n", result);

    return 0;
}
