#include<stdio.h>
int main()
{
    int i,n=0,z=0,p=0,e;
    for(i=1;i<=10;i++)
    {
        printf("Enter a value: ");
        scanf("%d",&e);
        if(e<0)
        {
            n++;
        }
        else if(e==0)
        {
            z++;
        }
        else
        {
            p++;
        }
    }

    printf("\nTotal no. of negative values is %d\n",n);
    printf("\nTotal no. of 0 is %d\n",z);
    printf("\nTotal no. of positive values is %d\n",p);

    return 0;
}
