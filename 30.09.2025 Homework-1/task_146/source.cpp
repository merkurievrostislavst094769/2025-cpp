#include <cstdio>


// Два бандита
int main(int argc, char** argv)
{
    int g = 0;
    int l = 0;
    scanf_s("%d %d", &g, &l);
    int notGarry = l - 1;
    int notLarry = g - 1;

    printf("%d %d", notGarry, notLarry);
    return 0;
}