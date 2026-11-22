#include<stdio.h>

int main()

{

    int n;
    scanf("%d",&n);
    if (n == 1)
    {
        printf("0 0");
    }
    
    else if (n == 2)
    {
        printf("0 1");
    }

    else if (n == 3)
    {
        printf("0 2");
    }

    else if (n == 4)
    {
        printf("1 0");
    }

    else if (n == 5)
    {
        printf("1 1");
    }

    else if (n == 6)
    {
        printf("1 2");
    }

    else if (n == 7)
    {
        printf("2 0");
    }

    else if (n == 8)
    {
        printf("2 1");
    }

    else if (n == 9)
    {
        printf("2 2");
    }
    
    return 0;
}