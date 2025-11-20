#include<stdio.h>
int main()
{
    int Number;
    printf("Enter Value =");
    scanf("%d",&Number);
    if (Number%7==0)
    {
    printf("Number is divisible by 7");
    }
    else
    {
    printf("Number is not divisible by 7");
    }
    return 0;
}
