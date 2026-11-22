#include <stdio.h>

int main()
{
    float temperature;
    
    printf("Enter temperature : ");
    scanf("%f",&temperature);
    
    if(temperature <= 98.6)
    {
        printf("No fever");
    }
    
    else if(temperature >= 98.7 && temperature <= 100)
    {
        printf("fever");
    }
    
    else if(temperature >= 100.1 && temperature <= 102.3)
    {
        printf("high fever");
    }
    
    else if(temperature >= 102.4)
    {
        printf("Very high fever");
    }
    
    
    return 0;
}