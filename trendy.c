#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int n,middle;

    scanf("%d",&n);
    if (n>=100 && n<1000)
    {
        middle = (n/10)%10;

        if (middle % 3 == 0)
        {
            printf("Trendy Number");
        }

        else
        {
            printf("Not a Trendy Number");
        }
        
        
        
    }

    else
    {
        printf("Invalid Number");
    }
    return 0;
}