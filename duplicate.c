#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    int arr[n];
    int i;
    int j;
    int k;

    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k+1]; // if i enter 5 nos [1 2 3 1 4] now arr[0] == arr[3] so this line makes arr[3] = arr[4] 
                                       // then the array will be [1 2 3 4 4]
                }

                n--; // in this line we reduce the array size from 5 to 4 then the array became [1 2 3 4] the last element will be removed
                
                j--; // after shifting a new element is present at j so this ensures to check that element also
                
            }
            
        }
        
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    
}