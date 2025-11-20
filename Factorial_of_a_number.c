#include<stdio.h>
int main()
{
    int n,i;
    long long factorial=1;// initializing factorial to 1

    printf("Enter a non negative integer :");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Factorial is not defined for negative integers\n");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        factorial *=i;
        //Multiply all number between n and 1
    }
    printf("factorial of %d is %lld",n,factorial);
    }
    return 0;
}
