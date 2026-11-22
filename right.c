#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int n,i;
    scanf("%d",&n);
    
    while (n>0)
    {
        i = 0;
        while (i<n)
        {
            printf("*");
            i++;
        }
        printf("\n");
        n --;
        
    }
    
    
    
}