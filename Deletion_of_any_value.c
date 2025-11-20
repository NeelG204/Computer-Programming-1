#include<stdio.h>
int main()
{
    int i,n,pos=-1;
    int a[10];
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("\n\n");


    if((n>10)||(n<0))
    {
        printf("Invalid input!");
    }
    else
    {
        printf("Enter Elements: \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            pos++;
        }
        printf("\n\n");

        printf("Your Original array is: \n");
        for(i=0;i<=pos;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n\n");

        int p;
        printf("Enter the position of element you want to delete: \n");
        scanf("%d",&p);
        printf("\n\n");

        if(p<pos)
        {
            for(i=p;i<=pos;i++)
            {
                a[i]=a[i+1];
            }
        }

        printf("Your New array is: \n");
        for(i=0;i<=pos-1;i++)
        {
            printf("%d\t",a[i]);
        }
    }

    return 0;
}
