#include<stdio.h>
int main()
{
    int i,n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);


    int nos1[n1];
    int sum1;
    sum1 = 0;

    for (i = 0; i < n1; i++)
    {
        scanf("%d",&nos1[i]);
        sum1 = sum1 + nos1[i];
    }
    
    
    int nos2[n2];
    int sum2;
    sum2 = 0;

    for (i = 0; i < n2; i++)
    {
        scanf("%d",&nos2[i]);
        sum2 = sum2 + nos2[i];
    }

    if (sum1 == sum2 && n1 == n2)
    {
        printf("Same");
    }

    else
    {
        printf("Not Same");
    }
    
    

}