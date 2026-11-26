// using for loop


#include<stdio.h>
int main()
{
    int n, num, i, mult;
    printf("Enter a number : ");
    scanf("%d",&n);

    num = n/5;

    for (i = 1; i <= num; i++)
    {
        mult = i * 5;
        printf("%d ",mult);
    }

    
}