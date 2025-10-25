#include <cstdio>

int main() {
    int n = 0;
    int x = 0;
    int c = 0;
    int i = 0;

    scanf_s("%d", &n);

    int A[1000] = { 0 };

    for (i = 0; i < n; i++) 
    {
        scanf_s("%d", &A[i]);
    }

    scanf_s("%d", &x);

    for (i = 0; i < n; i++) 
    {
        if (A[i] == x) 
        {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}
