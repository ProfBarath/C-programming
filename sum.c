#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int i;
    int sum;
    sum = 0;
    
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("%d",sum);
    
}