#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    c = (a*b)-(a*c)-100;
    printf("%d",c);

    return 0;
}