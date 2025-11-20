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
    return 0;
}
