#include <cstdio>

int main() {
    int n = 0;
    scanf_s("%d", &n);

    int a = n / 100000;
    int b = (n / 10000) % 10;
    int c = (n / 1000) % 10;
    int d = (n / 100) % 10;
    int e = (n / 10) % 10;
    int f = n % 10;

    if ((a + b + c) == (d + e + f)) 
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}
