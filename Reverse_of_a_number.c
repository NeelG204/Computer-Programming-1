#include<stdio.h>
int main()
{
    int a,b,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a/=10;
        reverse=reverse*10+b;
    }
    printf("Reverse is %d",reverse);
    return 0;
}
