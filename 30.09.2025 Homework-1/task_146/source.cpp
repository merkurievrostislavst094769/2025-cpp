#include <cstdio>
#include <fstream>
#include <stdio.h>


// ��� �������
int main(int argc, char** argv)
{
    int g;
    int l;
    scanf_s("%d %d", &g, &l);
    int notGarry = l - 1;
    int notLarry = g - 1;

    printf("%d %d", notGarry, notLarry);
    return 0;
}