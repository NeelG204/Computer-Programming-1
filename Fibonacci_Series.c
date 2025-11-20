#include<stdio.h>
int main()
{
    int i,n;
    int num1,num2,next;
    printf("Enter the number of elements you want to be printed in fibonacci series: \n");
    scanf("%d",&n);
    printf("\n\n");

    num1=1;
    num2=1;
    printf("Your fibonacci series is: \n");
    if(n>=1)
    {
        printf("%d\t",num1);
    }
    if(n>=2)
    {
        printf("%d\t",num2);
    }
    for(i=3;i<=n;i++)
    {
        next=num1+num2;
        printf("%d\t",next);
        num1=num2;
        num2=next;
    }

    return 0;
}
