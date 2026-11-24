#include<stdio.h>
int main()
{
    int n, a = 1, b = 1;
    scanf("%d",&n);

    int arr[100];

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            if (arr[i] >= arr[i - 1])
            {
                a = 0;
            }
            
        }

        else
        {
            if (arr[i] <= arr[i - 1])
            {
                a = 0;
            }
            
        }


        if (i % 2 == 1)
        {
            if (arr[i] <= arr[i - 1])
            {
                b = 0;
            }
            
        }

        else
        {
            if (arr[i] >= arr[i - 1])
            {
                b = 0;
            }
            
        }
        
        
    }

    if (a == 1 || b == 1)
    {
        printf("Yes");
    }

    else{
        printf("No");
    }
}