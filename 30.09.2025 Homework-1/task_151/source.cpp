#include <cstdio>
#include <fstream>
#include <stdio.h>


// ֿונוגÿחü
int main(int argc, char** argv)
{
    long long N;
    scanf_s("%lld", &N);

    long long coins = (N + 9) / 10;
    printf("%lld", coins);
    return 0;
}