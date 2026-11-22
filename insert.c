#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    int arr[n + 1];
    int i;
    int pos,value;

    if (n >= 1 && n<= 5)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }

        scanf("%d %d",&pos,&value);

        if (pos >= 1 && pos <= 5)
        {
            for (i = n; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[pos - 1] = value;

            n++;

            printf("Array after insertion is\n");

            for (i = 0; i < n; i++)
            {
            printf("%d\n",arr[i]);
            }
        
        
        }

        else
        {
            printf("Invalid Input");
        }
    }

    else
    {
        printf("Invalid Input");
    }
    
}