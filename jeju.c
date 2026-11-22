#include<stdio.h>
#include<math.h>
int main()
{

    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n];
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
        
    }

    // the number of bus needed
    double bus = (double)sum / m;
    printf("The number of buss needed is %.0f",ceil(bus));
    

}
