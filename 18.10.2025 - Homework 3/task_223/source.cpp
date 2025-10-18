#include <cstdio>

int main() {
    int firstMax = -1;
    int secondMax = -1;
    int num = 0;

    firstMax = num;

    do {
        scanf_s("%d", &num);

        if (num > firstMax) {
            secondMax = firstMax;
            firstMax = num;
        }
        else if ((num > secondMax) && (num != firstMax)) {
            secondMax = num;
        }
    } while (num != 0);

    printf("%d\\n", secondMax);

    return 0;
}
