#include <cstdio>


// ֿונוגÿחü
int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);

    long long coins = (n + 9) / 10;
    printf("%lld", coins);
    return 0;
}