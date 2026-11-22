#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int frnd,team,a,b;
    scanf("%d %d",&frnd,&team);
    a = frnd/team;
    b = frnd%team;
    printf("The number of friends in each team is %d and left out is %d",a,b);
    return 0;
}