#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c = 2*(a+b);
    d = a*b;
    
    printf("The required length is %d m\n", c);
    printf("The required area of carpet is %d sqm\n", d);
    

    return 0;
}
