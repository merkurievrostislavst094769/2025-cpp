#include <cstdio>
#include <fstream>
#include <stdio.h>


// Всё могут короли
int main(int argc, char** argv)
{
    long long N;
    scanf_s("%lld", &N);

    long long answer = ((N + 1) / 2) * ((N + 1) / 2);
    printf("%lld", answer);

    return 0;
}