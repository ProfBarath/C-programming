#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int n;
    scanf("%d",&n);

    
     
    // no1

    int n1 = n/100;
    
    // no3

    int n3 = (n % 100)%10;

    // no2

    int n2 = (n % 100)/10;


    // no1

    int i=1;
    long long fact1 = 1;

    while (i <= n1)
    {
        fact1 = fact1 * i;
        i++;
    }

    // no2

    int j=1;
    long long fact2 = 1;

    while (j <= n2)
    {
        fact2 = fact2 * j;
        j++;
    }

    // no3

    int k=1;
    long long fact3 = 1;

    while (k <= n3)
    {
        fact3 = fact3 * k;
        k++;
    }

    if (fact1 + fact2 + fact3 == n)
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }
    
}