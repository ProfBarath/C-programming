#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int amnt,intst,year;
    scanf("%d %d %d ",&amnt,&intst,&year);

    float interset,amount,discount,final;

    interset = amnt*intst*year/100;
    amount = amnt + interset;
    discount = interset*2/100;
    final= amount - discount;

    printf("%.2f\n%.2f\n%.2f\n%.2f",interset,amount,discount,final);
}