#include <cstdio>
#include <cmath>

struct Point {
    int x;
    int y;
};

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);

    Point arr[100] = { 0 };

    for (int i = 0; i < n; i++) 
    {
        int x = 0;
        int y = 0;
        scanf_s("%d %d", &x, &y);
        arr[i].x = x;
        arr[i].y = y;
    }

    int index = 0;

    for (int i = 1; i < n; i++) 
    {
        double d1 = sqrt(arr[index].x * arr[index].x + arr[index].y * arr[index].y);
        double d2 = sqrt(arr[i].x * arr[i].x + arr[i].y * arr[i].y);

        if (d2 > d1) 
        {
            index = i;
        }
    }

    printf("%d %d\n", arr[index].x, arr[index].y);

    return 0;
}
