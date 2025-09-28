#include <cstdio>
#include <fstream>
#include <stdio.h>


// Игра
int main(int argc, char** argv)
{
    int M, T;
    scanf_s("%d", &M);
    scanf_s("%d", &T);

    int ivan = (T < 2 * M);
    char I = 'I', v = 'v', a = 'a', n = 'n';
    char D = 'D', e = 'e', n2 = 'n', i = 'i', s = 's';

    printf("%c%c%c%c%c\n",
        ivan * I + (1 - ivan) * D,
        ivan * v + (1 - ivan) * e,
        ivan * a + (1 - ivan) * n2,
        ivan * n + (1 - ivan) * i,
        ivan * 0 + (1 - ivan) * s);

    return 0;
}