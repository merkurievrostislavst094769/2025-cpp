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

    char* longest = NULL;
    int max_len = 0;

    char* word = strtok(str, " ");
    while (word != NULL) 
    {
        int len = strlen(word);
        if (len > max_len) 
        {
            max_len = len;
            longest = word;
        }
        word = strtok(NULL, " ");
    }

    if (longest != NULL) 
    {
        printf("%s %d\n", longest, max_len);
    }

    return 0;
}

