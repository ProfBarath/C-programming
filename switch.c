#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&n1, &n2);
    
    printf("Enter your choice\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    
    int ch;
    
    scanf("%d",&ch);
    
    
    switch(ch)
    {
        case 1 : printf("The answer is %d",n1 + n2);
        break;
        
        case 2 : printf("The answer is %d",n1 - n2);
        break;
        
        case 3 : printf("The answer is %d",n1 * n2);
        break;
        
        case 4 : if(n2 == 0)
                {
                    printf("Cannot divide");
                }
        
                else
                
                    printf("The answer is %d",n1 / n2);
    break;
        default: printf("Invalid choice");
    }
    return 0;
}