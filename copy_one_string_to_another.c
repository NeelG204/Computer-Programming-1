#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    printf("Enter a string: \n");
    gets(s);

    int t[100];
    strcpy(t,s);
    printf("Entered string is %s",t);

    return 0;
}
