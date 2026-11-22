#include<stdio.h>
#include<math.h>

int main()

{
    int i,j;

    int n = 50;

    for (i = 0; i < n; i++)
    {
        printf("*");
    }

    printf("\n");

    for (j = 0; j < n-2; j++)
    {
        printf("*");

        for (i = 0; i < n-2; i++)
        {
            printf(" ");
        }

        printf("*\n");

    }
    

    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    
