#include <cstdio>
#include <string.h>

unsigned char ToUpper(unsigned char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        return c - ('a' - 'A');
    }
    else
    {
        return c;
    }
}

int main(int argc, char** argv)
{
    char s[10] = { 0 };
    char c = 0;

    fgets(s, sizeof(s), stdin);
    c = s[0];

    printf("%c\n", ToUpper(c));
    return 0;
}

