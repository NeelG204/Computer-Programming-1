#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    printf("Enter a string: \n");
    gets(s);
    int t=strrev(s);

    if(t==s)
    {
        printf("String is a Palindrome.");
    }
    else
    {
        printf("String is not a Palindrome");
    }

    return 0;
}
