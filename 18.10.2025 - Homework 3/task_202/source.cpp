#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int x = 0;
    int r1 = 101;
    int r2 = 101;
    int r3 = 101;

    scanf_s("%d %d %d %d", &a, &b, &c, &d);

    for (x = -100; x <= 100; x++) 
    {
        long long v = (long long)a * x * x * x + (long long)b * x * x + (long long)c * x + d;
        if (v == 0) 
        {
            if (r1 == 101) 
            {
                r1 = x;
            }
            else if (r2 == 101 && x != r1) 
            {
                r2 = x;
            }
            else if (r3 == 101 && x != r1 && x != r2)
            {
                r3 = x;
            }
        }
    }

    if (r1 > r2) 
    { 
        int t = r1; 
        r1 = r2;
        r2 = t;
    }
    if (r1 > r3) 
    {
        int t = r1;
        r1 = r3;
        r3 = t; 
    }
    if (r2 > r3) 
    {
        int t = r2;
        r2 = r3;
        r3 = t;
    }

    int first = 1;
    if (r1 != 101)
    {
        printf("%d", r1);
        first = 0; 
    }
    if (r2 != 101) 
    {
        if (!first)
        {
            printf(" ");
            printf("%d", r2);
            first = 0;
        }
    }
    if (r3 != 101)
    {
        if (!first) {
            printf(" ");
            printf("%d", r3);
        }
    }
    return 0;
}
