#include<stdio.h>
int main()
{
    int number[100];//Array to store 100 numbers
    int i,largest,smallest;

    //Input 100 numbers
    printf("Enter 100 Numbers: \n");
    for(i=0;i<=100;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&number[i]);
    }

    //Initializing Largest and Smallest
    largest=number[0];
    smallest=number[0];

    //find Largest and smallest
    for(i=1;i<=100;i++)
    {
        if(number[i]>largest)
        {
            largest=number[i];
        }
        else if(number[i]<smallest)

        {
            smallest=number[i];
        }
    }

    printf("\nLargest is %d\n",largest);
    printf("Smallest is %d\n",smallest);

return 0;
}
