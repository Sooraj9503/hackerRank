#include<stdio.h>

int main()
{
    int num, i, n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }

    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}