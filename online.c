#include<stdio.h>

int main()
{
    int n, i, j, temp;

    scanf("%d",&n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array after Segregation\n");

    // Print even numbers
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    // Print odd numbers
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    return 0;
}