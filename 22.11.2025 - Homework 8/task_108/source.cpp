#include <cstdio>
#include <string.h>

int main(int argc, char** argv)
{
    char str[1000] = { 0 };
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
            break;
        }
    }

    int len = strlen(str);
    int is_palindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i]) 
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) 
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
