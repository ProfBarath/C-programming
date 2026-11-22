#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int gold,ben1,black1,ben,remaining1,black,pi;

    scanf("%d %d %d",&gold,&ben1,&black1);
    ben = (gold*ben1/100);
    remaining1 = (gold - ben);

    black = (remaining1*black1/100);
    pi = (remaining1 - black)/3;

    printf("%d\n%d\n%d\n",ben,black,pi);

    return 0;
    
}