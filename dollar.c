#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int dollar1,cent1,dollar2,cent2,dollar,cent,total_d1,total_c1,total_d2,total_c2;

    scanf("%d %d %d %d",&dollar1,&cent1,&dollar2,&cent2);
    cent = cent1 + cent2;
    dollar = dollar1 + dollar2;
    if (cent >=100)
    {
        total_d1 = dollar + (cent/100);
        total_c1 = cent % 100;
        printf("%d\n",total_d1);
        printf("%d\n",total_c1);
    }
    else if (cent < 100)
    {
        total_d2 = dollar;
        total_c2 = cent;

        printf("%d\n",total_d2);
        printf("%d\n",total_c2);
    }
    
}