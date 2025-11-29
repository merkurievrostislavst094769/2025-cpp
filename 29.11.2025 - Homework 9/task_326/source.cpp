#include <cstdio>
#include <cmath>

struct Point {
    int x;
    int y;
};

double dist(const Point& a, const Point& b) 
{
    double dx = (double)a.x - b.x;
    double dy = (double)a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);

    Point arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf_s("%d %d", &arr[i].x, &arr[i].y);
    }

    double best = 0.0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++) 
            {

                double a = dist(arr[i], arr[j]);
                double b = dist(arr[j], arr[k]);
                double c = dist(arr[k], arr[i]);

                double p = a + b + c;

                if (p > best) best = p;
            }
        }
    }

    printf("%.15lf\n", best);

    return 0;
}
