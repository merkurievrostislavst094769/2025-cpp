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

    Point arr[100];

    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d %d", &arr[i].x, &arr[i].y);
    }

    double maxDist = 0.0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) {
            double dx = (double)arr[i].x - arr[j].x;
            double dy = (double)arr[i].y - arr[j].y;
            double dist = sqrt(dx * dx + dy * dy);

            if (dist > maxDist) 
            {
                maxDist = dist;
            }
        }
    }

    printf("%.15lf\n", maxDist);

    return 0;
}
