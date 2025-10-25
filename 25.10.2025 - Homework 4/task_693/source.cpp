#include <cstdio>

int main() {
    int n = 0;
    int l = 0;
    int r = 0;
    int i = 0;
    int max = 0;
    int index = 0;
    int A[1000] = { 0 };

    scanf_s("%d", &n);

    for (i = 0; i < n; i++) 
    {
        scanf_s("%d", &A[i]);
    }

    scanf_s("%d %d", &l, &r);

    max = A[l - 1];
    index = l;

    for (i = l; i < r; i++) 
    {
        if (A[i] > max) 
        {
            max = A[i];
            index = i + 1;
        }
    }

    printf("%d %d\n", max, index);
    return 0;
}
