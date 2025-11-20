#include<stdio.h>
int main()
{
    int i,sum=0;//initializing sum to 0
    for(i=1;i<=100;i++)
    {
        if(i%13==0)
        {
            sum+= i;
        }
    }


    printf("Sum of Numbers between 1 to 100 divisible by 13 is %d",sum);

    return 0;
}
