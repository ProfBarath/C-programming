#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int i = 1,n;
    long long fact = 1;
    scanf("%d",&n);
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("%d",fact);
    

}