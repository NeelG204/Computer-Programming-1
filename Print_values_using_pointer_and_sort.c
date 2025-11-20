#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    int *p;
    p=&a;

    printf("Enter the 5 elements of array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p);
        p++;
    }
    printf("\n\n");

    p=a;
    printf("Your Entered Array is: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",*p);
        p++;
    }
    printf("\n\n\n");

    int num1;
    int *h;
    h=&num1;

    printf("Select the order in which you want to be sorted(1 for ascending,2 for descending): \n");
    scanf("%d",h);
    if(num1==1)
    {
        for(j=0;j<5;j++)
        {
            for(i=0;i<5-j-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i+1];
                    a[i+1]=a[i];
                    a[i]=temp;
                }
            }
        }
        printf("Your Ascending array is: \n");
        for(i=0;i<5;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    else if(num1==2)
    {
        for(j=0;j<5;j++)
        {
            for(i=0;i<5-j-1;i++)
            {
                if(a[i]<a[i+1])
                {
                    temp=a[i+1];
                    a[i+1]=a[i];
                    a[i]=temp;
                }
            }
        }
        printf("Your Descending Array is: \n");
        for(i=0;i<5;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}
