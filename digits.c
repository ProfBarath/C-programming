#include<stdio.h>
int main()

{

    int n,digit,sum;
    scanf("%d",&n);


    while (n >= 10)
    {
        sum = 0;

        while (n != 0)
        {
            digit = n % 10;
            sum = digit + sum;
            n = n/10;
        }
        
        n = sum;

    
        
    }

    printf("%d",n);
    
}