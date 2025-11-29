#include <cstdio>

struct Point {
    int x;
    int y;
};

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);

    Point arr[100] = { 0 };

    long long sumX = 0;
    long long sumY = 0;

    for (int i = 0; i < n; i++) 
    {
        int x = 0;
        int y = 0;
        scanf_s("%d %d", &x, &y);
        arr[i].x = x;
        arr[i].y = y;

        sumX += x;
        sumY += y;
    }

    double cx = (double)sumX / n;
    double cy = (double)sumY / n;

    printf("%.15lf %.15lf\n", cx, cy);

    return 0;
}
