#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int n;
    scanf("%d",&n);
    int first,second,third,res,result;

    first = n/100;
    second = (n/10)%10;
    third = (n%100)%10;

    res = third*10 + second;// to join the two numbers, first multiply with 10 and add the second number
    result = res*10 +first;
    printf("%d",result);

    return 0;
}