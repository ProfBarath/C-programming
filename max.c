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
    

    if(a[0] > a [1] && a[0] > a[2] && a[0] > a[3] && a[0] > a[4] && a[0] > a[5])
        printf("Maximum = %d\n",a[0]);
    else if(a[1] > a [2] && a[1] > a[3] && a[1] > a[4] && a[1] > a[5])
        printf("Maximum = %d\n",a[1]);
    else if(a[2] > a [3] && a[2] > a[4] && a[2] > a[5])
        printf("Maximum = %d\n",a[2]);
    else if(a[3] > a [4] && a[3] > a[5])
        printf("Maximum = %d\n",a[3]);
    else if(a[4] > a [5])
        printf("Maximum = %d\n",a[4]);
    
    else
    {
        printf("Maximum = %d\n",a[5]);
    }
    
    if(a[0] < a [1] && a[0] < a[2] && a[0] < a[3] && a[0] < a[4] && a[0] < a[5])
        printf("Minimum = %d",a[0]);
    else if(a[1] < a [2] && a[1] < a[3] && a[1] < a[4] && a[1] < a[5])
        printf("Minimum = %d",a[1]);
    else if(a[2] < a [3] && a[2] < a[4] && a[2] < a[5])
        printf("Minimum = %d",a[2]);
    else if(a[3] < a [4] && a[3] < a[5])
        printf("Minimum = %d",a[3]);
    else if(a[4] < a [5])
        printf("Minimum = %d",a[4]);
    
    else
    {
        printf("Minimum = %d",a[5]);
    }
    
    
    
    
    return 0;
}