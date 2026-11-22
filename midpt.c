#include<stdio.h>
int main()

{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d",&x1, &y1, &x2, &y2);

    float x,y;

    x = ((float)(x1+x2)/2);
    y = ((float)(y1+y2)/2);

    printf("Arun's house is located at(%.1f,%.1f)",x,y);
}