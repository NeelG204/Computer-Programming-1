#include<stdio.h>
int main()
{
    int i,n;
    int pos=-1;
    int a[10];

    printf("Enter number of elements: \n");
    scanf("%d",&n);
    if((n>10)||(n<0))
    {
        printf("Invalid Input!");
    }
    else
    {
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        pos++;
    }
    printf("\n\n");


    printf("your Original Array is: \n");
    for(i=0;i<=pos;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");

    for(i=0;i<=pos;i++)
    {
        a[i]=a[i+1];
    }

    printf("The New Array is: \n");
    for(i=0;i<=pos-1;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    return 0;
}
