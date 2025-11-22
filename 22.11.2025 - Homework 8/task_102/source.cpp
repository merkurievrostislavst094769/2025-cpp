#include <cstdio>
#include <string.h>

bool IsDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main(int argc, char** argv)
{
    char s[10] = { 0 };
    char c = 0;

    fgets(s, sizeof(s), stdin);
    c = s[0];

    if (IsDigit(c))
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
    return 0;
}

