#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{
    int n,i,first,second,next;
    first = 0, second = 1, next;


    scanf("%d",&n);

    
    for (i = 0; i < n; i++)
    {
        
        next = first + second;
        first = second;
        second = next;
    }

    printf("%d",second - first);

    return 0;
    
}