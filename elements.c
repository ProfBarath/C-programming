#include<stdio.h>
int main()

{
    int n,i,j,distinct,count = 0;
    scanf("%d",&n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        distinct = 1;

        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                distinct = 0;
                break;
            }
            
        }

        if (distinct)
        {
            count ++;
        }
        
        
    }
    printf("There are %d distinct element in the array.",count);
}