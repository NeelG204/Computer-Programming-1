#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    printf("Enter a string: \n");
    gets(s);
    strrev(s);

    printf("Reversed string is %s",s);

    return 0;
}
