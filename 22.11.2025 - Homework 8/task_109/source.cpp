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

    char result = '\0';
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (strchr(str + i + 1, str[i]) != NULL)
        {
            result = str[i];
            break;
        }
    }

    if (result != '\0') 
    {
        printf("%c\n", result);
    }

    return 0;
}
