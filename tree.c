#include<stdio.h>

int main()

{

    int tree_no, row, column;
    scanf("%d %d %d", &row, &column, &tree_no);

    //The first row is always less or equal to the number column
    //The first column, if we get the reminder as 1 if we divide tree_no with column
    //The last column, if we get the reminder as 0 if we divide tree_no with column

    if (tree_no <= column || tree_no % column == 1 || tree_no % column == 0)
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }
    
}