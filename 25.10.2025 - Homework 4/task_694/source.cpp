#include <cstdio>

int main() {
    int n = 0;
    int i = 0;
    int min = 0;
    int max = 0;
    int A[1000] = { 0 };

    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &A[i]);
    }

    min = A[0];
    max = A[0];

    for (i = 1; i < n; i++) 
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    for (i = 0; i < n; i++) 
    {
        if (A[i] == max)
        {
            A[i] = min;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
