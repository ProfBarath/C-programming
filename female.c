#include<stdio.h>
int main()
{

    int m,n,i,j;
    scanf("%d %d",&m,&n);

    int arr[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    // Largest in each column
    for(j = 0; j < n; j++)
    {
        int max = arr[0][j];   // First element of the column

        for(i = 1; i < n; i++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }

        printf("%d\n", max);
    }
    

}