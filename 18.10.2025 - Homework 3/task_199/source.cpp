#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    int x = 0;
    int y = 0;
    int nod = 0;
    long long nok = 0;

    scanf_s("%d %d", &a, &b);

    x = a;
    y = b;

    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    nod = x;
    nok = (long long)a / nod * b;

    printf("%lld", nok);

    return 0;
}



