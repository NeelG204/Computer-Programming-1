#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string: \n");
    gets(s);

    int i=strlen(s);

    for(int j=0;j<i;j++)
    {
        printf("%c\n",s[j]);
    }

    return 0;
}
