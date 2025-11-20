#include<stdio.h>
int main()
{
    int a,b,c,reverse=0;
    printf("Enter a number :");
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
        b=a%10;
        a/=10;
        reverse=reverse*10+b;
    }

        if(c==reverse)
        {
        printf("The number is Palindrome.");
        }
        else
        {
        printf("The number is not a Palindrome.");
        }
    return 0;
}
