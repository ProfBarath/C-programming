#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{
    int n,i,first,second,next;
    first = 0, second = 1, next;

    printf("Enter no of terms :");
    scanf("%d",&n);

    printf("Fibonacci series :");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
    
}