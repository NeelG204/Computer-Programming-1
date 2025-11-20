#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    printf("Enter a string: \n");
    gets(s);

    strlwr(s);
    printf("Entered string in lowercase is %s",s);

    return 0;
}
