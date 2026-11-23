// using while loop
#include<stdio.h>
int main()
{
    int n, i, mult;
    printf("Enter a number : ");
    scanf("%d",&n);

    i = 0;

    while (i + 5 <= n)
    {
        i = i + 5;
        printf("%d ",i);

    }
    
}