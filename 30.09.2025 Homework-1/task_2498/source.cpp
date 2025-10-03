#include <cstdio>


// Всё могут короли
int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);

    long long answer = ((n + 1) / 2) * ((n + 1) / 2);
    printf("%lld", answer);

    return 0;
}