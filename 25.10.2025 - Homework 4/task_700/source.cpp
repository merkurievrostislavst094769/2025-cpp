#include <cstdio>

int main() {
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;
    int t = 0;
    int A[1000] = { 0 };

    scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);

    for (i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }

    for (i = 0; i < (b - a + 1) / 2; i++) 
    {
        t = A[a - 1 + i];
        A[a - 1 + i] = A[b - 1 - i];
        A[b - 1 - i] = t;
    }

    for (i = 0; i < (d - c + 1) / 2; i++)
    {
        t = A[c - 1 + i];
        A[c - 1 + i] = A[d - 1 - i];
        A[d - 1 - i] = t;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
