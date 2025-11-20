#include<stdio.h>
int main()
{
    int a,b,c,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
        b=a%10;
        a/=10;
        reverse=(b*b*b)+reverse;
    }

        if(c==reverse)
        {
        printf("The number is Armstrong.");
        }
        else
        {
        printf("The number is not a Armstrong.");
        }
    return 0;
}
