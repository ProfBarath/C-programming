#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    if(num > 0)
    {
        printf("Positive");
    }
    
    if(num == 0)
    {
        printf("Neither positive or negative");
    }
    
    if(num < 0)
    {
        printf("Negative");
    }
    
    return 0;
}