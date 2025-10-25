#include <cstdio>

int main() {
    int n = 0;
    int i = 0;
    int A[1000] = { 0 };

    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &A[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
