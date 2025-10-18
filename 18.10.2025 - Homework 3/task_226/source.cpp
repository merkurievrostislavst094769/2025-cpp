#include <cstdio>

int main() {
    int num1 = 0;
    int num2 = 0;
    int c = 1;
    int maxc = 1;

    scanf_s("%d", &num2);

    do {
        scanf_s("%d", &num1);

        if (num1 == num2 && num1 != 0) {
            c++;
            if (c > maxc) {
                maxc = c;
            }
        }
        else {
            c = 1;
        }

        num2 = num1;
    } while (num1 != 0);

    printf("%d\n", maxc);

    return 0;
}

