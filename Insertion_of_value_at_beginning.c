#include<stdio.h>
int main()
{
    int i,n,num;
    int a[10];
    int pos=-1;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    if((n>=10)||(n<0))
    {
        printf("Invalid input!");
    }
    else
    {
        printf("enter elements: \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            pos++;
        }
        printf("\n\n");

        printf("Your Original Array is: \n");
        for(i=0;i<=pos;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n\n");


        if(pos>=9)
        {
            printf("Your Array is full ! Insertion is not possible.");
        }
        else
        {
            printf("Enter the value you want to insert: ");
            scanf("%d",&num);
            pos++;
            for(i=pos;i>=0;i--)
            {
                a[i+1]=a[i];
            }
            a[0]=num;
        }

        printf("Your inserted array is: \n");
        for(i=0;i<=pos;i++)
        {
            printf("%d\t",a[i]);
        }
    }

    return 0;
}
