#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a/=10;
        sum=sum+b;
    }

        printf("Sum of each digits is %d",sum);
return 0;
}
