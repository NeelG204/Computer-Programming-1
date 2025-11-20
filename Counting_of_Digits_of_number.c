#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
        count++;
        a/=10;
    }
    printf("Number of Digits are %d",count);
}
