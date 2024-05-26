#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0'; // remove the newline character
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}