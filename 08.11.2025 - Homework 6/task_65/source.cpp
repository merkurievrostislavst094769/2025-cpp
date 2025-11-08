#include <cstdio>
#include <cstdlib>

int main() 
{
    int n = 0;
    int i = 0;
    int count = 0;
    int* arr = NULL;

    scanf_s("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
    {
        if (arr[i] > 0) 
        {
            count++;
        }
    }

    printf("%d\n", count);

    free(arr);
    return 0;
}
