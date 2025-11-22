#include <cstdio>
#include <string.h>

int main(int argc, char** argv) 
{
    char s[100] = { 0 };
    fgets(s, sizeof(s), stdin);

    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') 
    {
        s[len - 1] = '\0';
        len--;
    }

    for (size_t i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            s[i] = s[i] + ('a' - 'A');
        }
    }

    printf("%s\n", s);
    return 0;
}


