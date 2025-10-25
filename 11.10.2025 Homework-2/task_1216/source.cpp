#include <cstdio>

int main() {
    int aa1 = 0;
    int bb1 = 0;
    int cc1 = 0;
    int aa2 = 0;
    int bb2 = 0;
    int cc2 = 0;

    scanf_s("%d %d %d", &aa1, &bb1, &cc1);
    scanf_s("%d %d %d", &aa2, &bb2, &cc2);

    int a1 = 0;
    int b1 = 0;
    int c1 = 0;

    if (aa1 <= bb1)
    {
        if (aa1 <= cc1) 
        {
            a1 = aa1;
            if (bb1 <= cc1)
            {
                b1 = bb1;
                c1 = cc1;
            }
            else
            {
                b1 = cc1;
                c1 = bb1;
            }
        }
        else
        {
            a1 = cc1;
            b1 = aa1;
            c1 = bb1;
        }
    }
    else 
    {
        if (bb1 <= cc1) 
        {
            a1 = bb1;
            if (aa1 <= cc1) 
            {
                b1 = aa1;
                c1 = cc1;
            }
            else
            {
                b1 = cc1;
                c1 = aa1;
            }
        }
        else
        {
            a1 = cc1;
            b1 = bb1;
            c1 = aa1;
        }
    }

    int a2 = 0;
    int b2 = 0;
    int c2 = 0;

    if (aa2 <= bb2)
    {
        if (aa2 <= cc2)
        {
            a2 = aa2;
            if (bb2 <= cc2) 
            {
                b2 = bb2;
                c2 = cc2;
            }
            else
            {
                b2 = cc2;
                c2 = bb2;
            }
        }
        else 
        {
            a2 = cc2;
            b2 = aa2;
            c2 = bb2;
        }
    }
    else 
    {
        if (bb2 <= cc2)
        {
            a2 = bb2;
            if (aa2 <= cc2)
            {
                b2 = aa2;
                c2 = cc2;
            }
            else 
            {
                b2 = cc2;
                c2 = aa2;
            }
        }
        else 
        {
            a2 = cc2;
            b2 = bb2;
            c2 = aa2;
        }
    }

    if (a1 == a2 && b1 == b2 && c1 == c2) {
        printf("Boxes are equal\n");
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2 &&
        (a1 < a2 || b1 < b2 || c1 < c2)) {
        printf("The first box is smaller than the second one\n");
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2 &&
        (a1 > a2 || b1 > b2 || c1 > c2)) {
        printf("The first box is larger than the second one\n");
    }
    else {
        printf("Boxes are incomparable\n");
    }

    return 0;
}
