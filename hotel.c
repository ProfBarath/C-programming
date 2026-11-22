#include <stdio.h>

int main() {

    int month, rent, days;

    scanf("%d %d %d", &month, &rent, &days);

    if(month >= 1 && month <= 12)
    {

        if(month == 1 || month == 2 || month == 3 ||month == 5 || month == 7 || month == 8 || month == 10)
        {
            int total1;

            total1 = rent * days;

            printf("%d", total1);
        }

        else if(month == 4 || month == 6 || month == 9 || month == 11 || month == 12)
        {
            int total2;

            total2 = (rent * days) +
                     ((rent * days * 20) / 100);

            printf("%d", total2);
        }
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}