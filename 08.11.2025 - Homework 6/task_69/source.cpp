#include <cstdio>
#include <cstdlib>

int main() 
{
    int n = 0;
    int i = 0;
    int temp = 0;
    int* arr = NULL;

    scanf_s("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    for (i = 0; i < n; i++) 
    {
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++) 
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", arr[i]);
    }

    free(arr);
    return 0;
}
