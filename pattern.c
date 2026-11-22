#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    
    scanf("%d",&n);

    for (i = 0 ; i < n; i++)
    {
        printf("*");
    }

    printf("\n");

    for (j = 0; j < n-2; j++)
    {
        printf("*");

        for (i = 0; i < n-2 ; i++)
        {
            printf(" ");
        }
        
        printf("*\n");
    }
           
    for (i = 0 ; i < n; i++)
    {
        printf("*");
    }

}