#include <cstdio>

int main() {
    int n = 0;
    int i = 0;
    int x = 0;
    int closest = 0;
    int delta = 0;
    int min = 0;
    int A[1000] = { 0 };

    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &A[i]);
    }
    scanf_s("%d", &x);

    closest = A[0];
    if (A[0] > x)
    {
        min = A[0] - x;
    }
    else
        min = x - A[0];

    for (i = 1; i < n; i++) 
    {
        delta = A[i] - x;
        if (delta < 0)
        {
            delta = -delta;
        }

        if (delta < min || (delta == min && A[i] < closest)) 
        {
            min = delta;
            closest = A[i];
        }
    }

    printf("%d\n", closest);
    return 0;
}

