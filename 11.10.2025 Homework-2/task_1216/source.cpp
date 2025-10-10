#include <cstdio>

int main() {
    int A1 = 0;
    int B1 = 0;
    int C1 = 0;
    int A2 = 0;
    int B2 = 0;
    int C2 = 0;

    scanf_s("%d %d %d", &A1, &B1, &C1);
    scanf_s("%d %d %d", &A2, &B2, &C2);

    int a1 = 0;
    int b1 = 0;
    int c1 = 0;

    if (A1 <= B1)
    {
        if (A1 <= C1) 
        {
            a1 = A1;
            if (B1 <= C1)
            {
                b1 = B1;
                c1 = C1;
            }
            else
            {
                b1 = C1;
                c1 = B1;
            }
        }
        else
        {
            a1 = C1;
            b1 = A1;
            c1 = B1;
        }
    }
    else 
    {
        if (B1 <= C1) 
        {
            a1 = B1;
            if (A1 <= C1) 
            {
                b1 = A1;
                c1 = C1;
            }
            else
            {
                b1 = C1;
                c1 = A1;
            }
        }
        else
        {
            a1 = C1;
            b1 = B1;
            c1 = A1;
        }
    }

    int a2 = 0;
    int b2 = 0;
    int c2 = 0;

    if (A2 <= B2)
    {
        if (A2 <= C2)
        {
            a2 = A2;
            if (B2 <= C2) 
            {
                b2 = B2;
                c2 = C2;
            }
            else
            {
                b2 = C2;
                c2 = B2;
            }
        }
        else 
        {
            a2 = C2;
            b2 = A2;
            c2 = B2;
        }
    }
    else 
    {
        if (B2 <= C2)
        {
            a2 = B2;
            if (A2 <= C2)
            {
                b2 = A2;
                c2 = C2;
            }
            else 
            {
                b2 = C2;
                c2 = A2;
            }
        }
        else 
        {
            a2 = C2;
            b2 = B2;
            c2 = A2;
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
