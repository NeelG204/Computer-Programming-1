
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n==2)||(n==3)||(n==5)||(n==7)||(n==11)||(n==13)||(n==17)||(n==19))
    {
        printf("It is a prime number.");
    }
    else if((n%2==0)||(n%3==0)||(n%5==0)||(n%7==0)||(n%11==0)||(n%13==0)||(n%17==0)||(n%19==0))
    {
        printf("It is not a prime number.");
    }
    else
    {
        printf("It is a prime number");
    }
    return 0;
}

