#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string: \n");
    gets(s);

    int i=strlen(s);
    printf("Length of the string is %d.",i);

    return 0;
}
