#include<stdio.h>
int main()
{
    int n,i,num,sum=0;//Initializing sum to 0
    float avg;

    printf("How many numbers you want to take sum and average of? \n");
    scanf("%d",&n);

    printf("Enter %d Numbers: \n",n);

    for(i=1;i<=n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        sum +=num;
    }

    avg=(float)sum/n;

    printf("\nSum of %d number is %d\n",n,sum);
    printf("Average of %d number is %.2f\n",n,avg);

    return 0;
}
