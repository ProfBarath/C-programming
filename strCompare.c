#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    char s[n][1001];
    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%s",s[i]);
    }
    
    char temp[1001];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(s[j] , s[j + 1]) > 0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
        
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\n",s[i]);
    }
    
    
}