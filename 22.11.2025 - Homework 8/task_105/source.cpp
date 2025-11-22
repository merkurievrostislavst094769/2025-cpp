#include <cstdio>
#include <string.h>

bool Compare(char* s1, char* s2) 
{
    if (strcmp(s1, s2) == 0)
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
    char str1[1000] = { 0 };
    char str2[1000] = { 0 };

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    if (str1[strlen(str1) - 1] == '\n')
    {
        str1[strlen(str1) - 1] = '\0';
    }
    if (str2[strlen(str2) - 1] == '\n')
    {
        str2[strlen(str2) - 1] = '\0';
    }

    if (Compare(str1, str2)) 
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
