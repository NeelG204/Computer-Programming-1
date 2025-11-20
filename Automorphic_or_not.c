#include<stdio.h>
int main()
{
    int n,a=1,Auto,digit=0,b;

    printf("Enter a Number: ");
    scanf("%d",&b);

    n=b;
    while(b>0)
    {
        b=b/10;
        digit++;
    }

    for(int i=0;i<digit;i++)
    {
        a=a*10;
    }

    printf("Square of %d is %d\n",n,n*n);

    Auto=(n*n)%a;

    if(n==Auto)
    {
        printf("%d is Automorphic",n);
    }
    else
    {
        printf("%d is not Automorphic",n);
    }

    return 0;
}
