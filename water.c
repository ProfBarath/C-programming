#include <stdio.h>

int main()
{
    int nb, ne, bc;
    bc = 0;
    printf("Enter No of bottles and no of exchange :");
    scanf("%d %d", &nb, &ne);
    while(nb >= ne)
    {
        bc = bc + ne;
        nb = nb - ne + 1;
    }
    
    printf("%d",bc + nb);
    return 0;
}