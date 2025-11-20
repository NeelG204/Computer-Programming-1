#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    printf("Enter a string: \n");
    gets(s);
    strupr(s);

    printf("Entered string in uppercase is %s",s);

    return 0;
}
