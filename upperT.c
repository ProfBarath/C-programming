#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 1; i < n; i++)
    {
        for (j = n - 1 - i; j < n; j++)
        {
            a[i][j] = a[n - j - 1][n - i - 1];
        }
        
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}