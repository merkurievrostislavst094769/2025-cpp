#include <cstdio>

int main() {
    double x = 0;
    double y = 0;
    scanf_s("%lf %lf", &x, &y);
    int n = 1;
    while (x < y)
    {
        x = 1,15 * x;
        n++;
    }
    printf("%d", n);
    return 0;
}

