#include<stdio.h>
int main()
{
    int i,n,num;
    int pos=-1;
    int a[10];

    printf("Enter the number of elements: \n");
    scanf("%d",&n);

    if((n>10)||(n<0))
    {
        printf("Invalid Input!");
    }
    else{
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        pos++;
    }
    printf("\n\n");

    printf("Your Input Array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");


    if(pos>=9)
    {
        printf("your array is full.Insertion is not possible.");
    }
    else
    {
        printf("Enter the number you want to insert: ");
        scanf("%d",&num);
        pos++;
        a[pos]=num;
    }
    printf("\n\n");


    printf("Your New Array is: \n");
    for(i=0;i<=pos;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    return 0;
}
