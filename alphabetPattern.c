#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[1001];
    scanf("%s",s);

    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'z')
        {
            printf("a");
        }

        else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            printf("%c",toupper(s[i] + 1));
        }

        else
        {
            printf("%c",s[i] + 1);
        }
    }
    
}