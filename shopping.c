#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int flip1,flip2,flip3,snap1,snap2,snap3,amzn1,amzn2,amzn3,Flipkart,snapdeal,amazon;

    scanf("%d %d %d %d %d %d %d %d %d",&flip1,&flip2,&flip3,&snap1,&snap2,&snap3,&amzn1,&amzn2,&amzn3);


// final price=price-(price*discount/100)+shipping


    Flipkart = (flip1 - (flip1*flip2/100)+flip3);
    snapdeal = (snap1 - (snap1*snap2/100)+snap3);
    amazon = (amzn1 - (amzn1*amzn2/100)+amzn3);
    
    printf("In Flipkart: Rs.%d\nIn Snapdeal: Rs.%d\nIn Amazon: Rs.%d\n",Flipkart,snapdeal,amazon);

    if (Flipkart <= snapdeal && Flipkart <= amazon)
    {
    printf("Choose Flipkart");
    }
    else if (snapdeal <= Flipkart && snapdeal <= amazon)
    {
    printf("Choose Snapdeal");
    }
    else
    {
    printf("Choose Amazon");
    }
    


    return 0;
    

}