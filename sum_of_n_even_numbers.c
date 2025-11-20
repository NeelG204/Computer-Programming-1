#include<stdio.h>
int main()
{
    int n,i,sum=0;//initializing sum to 0

    printf("Enter the number of Even terms you want sum of:");
    scanf("%d",&n);

    //loop to calculate sum of even
    for(i=1;i<=n;i++)
    {
        sum +=(2*i);
    }

    printf("Sum of %d Even Number is %d",n,sum);

    return 0;
}
