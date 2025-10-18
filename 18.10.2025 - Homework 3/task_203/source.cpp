#include <cstdio>

int main() {
    int n = 0;
    int temperature = 0;
    int c = 0;
    int maxc = 0;

    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &temperature);

        if (temperature > 0) {
            c++;
            if (c > maxc)
                maxc = c;
        }
        else {
            c = 0;
        }
    }
    printf("%d\n", maxc);

    return 0;
}
