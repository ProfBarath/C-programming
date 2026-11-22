#include<stdio.h>

int main()

{
    float a;
    scanf("%f",&a);
    if (a<=200)
    {
        printf("Rs.%.0f",((0.5)*a));
    }

    else if (a<=400)
    {
        printf("Rs.%.0f",((0.65)*a)+100);
    }

    else if (a<600)
    {
        printf("Rs.%.0f",((0.80)*a)+200);
    }

    else if (a>600)
    {
        printf("Rs.%.0f",((1.25)*a)+425);
    }

    else
    {
        printf("Wrong input");
    }    
    
    
}   

