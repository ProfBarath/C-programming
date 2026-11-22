#include<stdio.h>

int main()

{
    char ch;
    scanf("%c",&ch);

    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

        { // this one line brackets can be leave out
            printf("Vowel");
        } // this one line brackets can be leave out
        
        else
        { // even for else also
            printf("Consonant");
        }
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}