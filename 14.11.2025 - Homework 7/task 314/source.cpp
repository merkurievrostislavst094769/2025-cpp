#include <cstdio>

void hanoi(int n, int from, int to, int mid) {
    if (n == 1)
    {
        printf("Disk %d move from %d to %d\n", 1, from, to);
    }
    else
    {
        hanoi(n - 1, from, mid, to);
        printf("Disk %d move from %d to %d\n", n, from, to);
        hanoi(n - 1, mid, to, from);
    }
}

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);

    hanoi(n, 1, 2, 3);

    return 0;
}