#include<stdio.h>

int main()

{

    int sun, mon, tue, wed ,thu, fri, sat, sunday, monday, tuesday, wednesday, thursday, friday, saturday;

    scanf("%d %d %d %d %d %d %d",&sun, &mon, &tue, &wed, &thu, &fri, &sat);

    if (sun <= 8)
    {
        sunday = ((sun*100) + (sun*100*50/100));
    }
    else

    {
        sunday = ((sun*100) + (sun*100*50/100))+ (sun-8)*15;
    }
    if (mon <= 8)
    {
        monday = (mon*100);
    }
    else
    {
        monday = ((mon*100)+((mon-8)*15));
    }

    if (tue <= 8)
    {
        tuesday = (tue*100);
    }
    else
    {
        tuesday = ((tue*100)+((tue-8)*15));
    }
    
    if (wed <= 8)
    {
        wednesday = (wed*100);
    }
    else
    {
        wednesday = ((wed*100)+((wed-8)*15));
    }

    if (thu <= 8)
    {
        thursday = (thu*100);
    }
    else
    {
        thursday = ((thu*100)+((thu-8)*15));
    }

    if (fri <= 8)
    {
        friday = (fri*100);
    }
    else
    {
        friday = ((fri*100)+((fri-8)*15));
    }

    if (sat <= 8)
    {
        saturday = (sat*100) + (sat*25);
    }
    else
    {
        saturday = ((sat*100)+((sat-8)*15)) +(sat*25) ;
    }

    int sum;

    sum = sunday + monday + tuesday + wednesday + thursday + friday + saturday;

    printf("%d",sum);
}