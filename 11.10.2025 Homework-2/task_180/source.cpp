#include <cstdio>
#include <math.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    double d = 0.0;
    double x1 = 0.0;
    double x2 = 0.0;

    scanf_s("%d %d %d", &a, &b, &c);

    if (a == 0) 
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("-1\n");
            }
            else 
            {
                printf("0\n");
            }
        }
        else 
        {
            printf("1\n");
            printf("%.4f\n", -(double)c / b);
        }
    }
    else 
    {
        d = (double)b * b - 4.0 * a * c;

        if (d < 0)
        {
            printf("0\n");
        }
        else if (d == 0) 
        {
            x1 = -(double)b / (2 * a);
            printf("1\n");
            printf("%.4f\n", x1);
        }
        else 
        {
            x1 = (-(double)b + sqrt(d)) / (2 * a);
            x2 = (-(double)b - sqrt(d)) / (2 * a);
            printf("2\n");
            if (x1 < x2)
            {
                printf("%.4f\n%.4f\n", x1, x2);
            }
            else 
            {
                printf("%.4f\n%.4f\n", x2, x1);
            }
        }
    }
    return 0;
}
