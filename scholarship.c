#include<stdio.h>

int main()

{

    int age,year,income,arrear;
    float mark,attendance;

    scanf("%d %d %d %d %f %f",&age, &year, &income, &arrear, &mark, &attendance);

    if (age>=18 && age<21 && year>=2021 && income<=200000 && arrear<=2 && mark>=60 && attendance>=80)
    {
        printf("Eligible");
    }

    else if (arrear>2 && mark>80 && attendance>=90 && income>200000 && income<250000 &&age>=18 && age<21 && year>=2021)
    {
        printf("Partially Eligible");
    }

    else
    {
        printf("Not Eligible");
    }

    return 0;
    
} 