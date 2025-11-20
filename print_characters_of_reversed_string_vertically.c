#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    printf("Enter a string: \n");
    gets(s);

    char t[100];
    strcpy(t,s);
    int i=strlen(t);
    strrev(t);

    for(int j=0;j<i;j++)
    {
        printf("%c\n",t[j]);
    }

    return 0;
}
