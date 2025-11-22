#include <cstdio>
#include <string.h>

int main(int argc, char** argv) 
{
    char str[1000] = { 0 };
    int count = 0;

    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }

    char* p = str;
    while (*p != '\0') {
        while (*p == ' ') {
            p++;
        }
        if (*p != '\0') {
            count++;
            while (*p != ' ' && *p != '\0') 
            {
                p++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
