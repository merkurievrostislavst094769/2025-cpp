#include <cstdio>

int main() {
    int n = 0;
    scanf_s("%d", &n);

    int a0 = 0, a1 = 1, fib = 0, i = 0;
    if (n == 0) {
        fib = 0;
    }
    else if (n == 1) {
        fib = 1;
    }
    else {
        i = 2;
        while (i <= n) {
            fib = a0 + a1;
            a0 = a1;
            a1 = fib;
            i++;
        }
    }
    printf("%d", fib);
    return 0;
}
