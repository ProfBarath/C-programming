#include<stdio.h>
int main()
{
    int i,n1,n2;
    scanf("%d",&n1);

    int nos1[n1];

    for (i = 0; i < n1; i++)
    {
        scanf("%d",&nos1[i]);
    }

    scanf("%d",&n2);


    int nos2[n2];

    for (i = 0; i < n2; i++)
    {
        scanf("%d",&nos2[i]);
    }
    
    int flag = 1;

    for (i = 0; i < n1; i++)
    {
        if (nos1[i]<nos2[i])
        {
            flag = 0;
            break;
        }
    }
    
    if (flag == 1 && n1 == n2)
    {
        printf("Compatible");
    }

    else
    {
        printf("Incompatible");
    }
    
}