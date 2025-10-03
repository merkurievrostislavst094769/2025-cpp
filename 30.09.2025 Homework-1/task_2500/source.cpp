#include <cstdio>


// Строки в книге
int main(int argc, char** argv)
{
    int k = 0;
    int n = 0;
    scanf_s("%d %d", &k, &n);

    int page = (n - 1) / k + 1;
    int stroka = (n - 1) % k + 1;

    printf("%d %d", page, stroka);
    return 0;;
}