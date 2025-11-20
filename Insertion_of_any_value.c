#include<stdio.h>
int main()
{
    int i,n,num,j;
    int pos=-1;
    int a[10];

    printf("Enter the number of elements: \n");
    scanf("%d",&n);

    if((n>=10)||(n<0))
    {
        printf("invalid input!");
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


        printf("Your Original Array is: \n");
        for(i=0;i<=pos;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n\n");


        if(pos>=9)    //verifying that whether array is having space or not.
        {
            printf("Your Array if Full!Insertion is not possible.");
        }
        else
        {
            printf("Enter the number you want insert: \n");
            scanf("%d",&num);
            printf("Enter the position at which you want to insert: \n");
            scanf("%d",&j);
            pos++;
            for(i=pos;i>=j;i--)
            {
                a[i]=a[i-1];
            }
            a[j-1]=num;

            printf("Your Inserted Array is: \n");
            for(i=0;i<=pos;i++)
            {
                printf("%d\t",a[i]);
            }
        }
    }

    return 0;
}
