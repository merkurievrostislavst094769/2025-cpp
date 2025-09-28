#include <cstdio>
#include <fstream>
#include <stdio.h>


// Следующее и предыдущее
int main(int argc, char** argv)
{
    int n;
    scanf_s("%d", &n);

    printf("The next number for the number %d is %d.\n", n, n + 1);
    printf("The previous number for the number %d is %d.\n", n, n - 1);

    return 0;
}