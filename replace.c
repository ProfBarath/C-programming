#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ans = 0, digit, place = 1;
    while(n != 0)
    {
        if ((n % 10) % 2 == 0)
        {
            digit = 0;
        }

        else
        {
            digit = n % 10;
        }

        ans = ans + digit * place;
        place = place * 10;
        
        n = n / 10;
    }
    
    printf("%d",ans);
}