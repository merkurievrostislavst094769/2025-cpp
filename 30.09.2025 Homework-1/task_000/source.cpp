#include <cstdio>


// Ёни€
int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d %d %d", &n, &a, &b);

    int S = a * b;
    int totalS = n * S;
    int BS = totalS * 2;
    printf("%d", BS);
    return 0;
}