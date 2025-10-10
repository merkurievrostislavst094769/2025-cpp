#include <cstdio>

int main() {
    int N = 0;
    scanf_s("%d", &N);
    int cuts = 0;

    if (N == 1) 
    {
        cuts = 0;
    }
    else if (N % 2 == 0)
    {
        cuts = N / 2;
    }
    else
    {
        cuts = N;
    }

    printf("%d\n", cuts);

    return 0;
}
