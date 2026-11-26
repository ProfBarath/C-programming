#include <stdio.h>

int main()
{
    int n, a[6], i;
    
    printf("Enter marks for 6 subjects : ");
    
    for(i = 0 ; i < 6; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    int ttl = 0;
    for(i = 0; i < 6; i++)
    {
        ttl = ttl + a[i];
    }
    
    int avg = ttl / 6;
    
    
    printf("Total = %d\n",ttl);
    printf("Average = %d\n",avg);

    int max;
    

    if(a[0] > a [1])
        max = a[0];

    else
        max = a[1];

    for(i = 2; i < 6; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    printf("Maximum = %d\n",max);

    int min;
    
    if(a[0] < a [1])
        min = a[0];

    else
        min = a[1];

    for(i = 2; i < 6; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    printf("Minimum = %d\n",min);
    
    return 0;
}