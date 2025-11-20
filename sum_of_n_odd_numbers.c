#include<stdio.h>
int main()
{
    int n,i,sum=0;//initializing sum to 0

    printf("Enter the Number of Odd terms: ");
    scanf("%d",&n);

    //loop to calculate sum of Odd
    for(i=1;i<=n;i++)
    {
        sum +=(2*i-1);
    }

    printf("Sum of First %d Odd Number is %d\n",n,sum);

    return 0;
}
