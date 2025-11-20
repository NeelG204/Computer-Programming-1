#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the integer till you want the sum: ");
    scanf("%d",&n);

    //loop to calculate the sum
    for(i=1;i<=n;i++)
    {
        sum+= i;
    }

    printf("Sum of First %d Natural Number is:%d\n",n,sum);

    return 0;
}
