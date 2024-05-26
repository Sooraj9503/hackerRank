#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int count[10] = {0};

        printf("Enter the string: ");

        //get the string input 
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] =0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count[str[i] - '0']++;
        }         
    }
    printf("\n");
    for(int i = 0; i < 10; i++)
        {
            printf("%d ", count[i]);
        }
    printf("\n");
    return 0;
}