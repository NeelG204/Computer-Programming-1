#include<stdio.h>
int main()
{
    int i,n,temp;
    int arr[5];

    printf("Enter number of elements of Array: \n");
    scanf("%d",&n);
    if ((n>5)||(n<=0))
    {
        printf("Invalid input.");
    }
    else
    {
        printf("Enter values: \n");

        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("\n\n");

        printf("Original Array: \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n\n");

        for(i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

        printf("Reversed Array: \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}
