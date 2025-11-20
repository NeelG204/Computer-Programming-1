#include<stdio.h>
int main()
{
    int i,num,sum=0;//intializing sum to 0
    float avg;

    printf("Enter 10 Numbers:\n");

    for(i=1;i<=10;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        sum+=num;//loop to calculate sum
    }

    avg=(float)sum/10.0;//loop to calculate average


    printf("\nSum of 10 numbers is %d\n",sum);
    printf("Average of 10 numbers is%.2f\n",avg);

    return 0;
}
