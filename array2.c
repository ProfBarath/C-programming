#include<stdio.h>
int main()

{

    int n;
    scanf("%d",&n);

    if (n > 0 && n<= 15)
    {
        int nos1[n];
        int i;

        int evensum = 0, oddsum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d",&nos1[i]);

            if (nos1[i] % 2 == 0)
            {
                evensum += nos1[i];
            }
            
            else
            {
                oddsum += nos1[i];
            }
        }

        printf("The sum of the even numbers in the array is %d\n",evensum);
        printf("The sum of the odd numbers in the array is %d",oddsum);
    }
    
}