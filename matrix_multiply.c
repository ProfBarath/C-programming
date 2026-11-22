#include<stdio.h>
int main()
{

    int n,m,i,j;
    scanf("%d %d",&n,&m);
// first 
    int arr1[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }

    // second

    int k,l;
    int arr2[m][m];

    for (k = 0; i < m; k++)
    {
        for (l = 0; l < m; l++)
        {
            scanf("%d",arr2[k][l]);
        }
        
    }

    printf("The transpose 1 :\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",arr1[j][i]);
        }
        printf("\n");
        
    }

    printf("The transpose 2 :");

    for (k = 0; i < m; k++)
    {
        for (l = 0; l < m; l++)
        {
            printf("%d",arr2[l][k]);
        }
        
    }


    // no
}