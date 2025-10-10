#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0)
    {
        printf("0");
        return 0;
    }

    int p = 0;

    if (a != 0)
    {
        printf("%d", a);
        p = 1;
    }

    if (b != 0) 
    {
        if (p) 
        {
            if (b > 0) 
            {
                printf("+");
            }
        }
        int abs_b = b;
        if (b < 0) 
        {
            abs_b = -b;
        }

        if (abs_b == 1)
        {
            if (b < 0) 
            {
                printf("-");
            }
            printf("x");
        }
        else 
        {
            printf("%d", b);
            printf("x");
        }
        p = 1;
    }

    if (c != 0)
    {
        if (p)
        {
            if (c > 0)
            {
                printf("+");
            }
        }
        int abs_c = c;
        if (c < 0) 
        {
            abs_c = -c;
        }

        if (abs_c == 1) 
        {
            if (c < 0)
            {
                printf("-");
            }
            printf("y");
        }
        else
        {
            printf("%d", c);
            printf("y");
        }
    }

    return 0;
}

