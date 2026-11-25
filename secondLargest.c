#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i;
    for (i = n - 1; i >= 1; i--)
    {
        if(n % i == 0)
        {
            printf("%d",i);
            break;
        }
    }
    
}