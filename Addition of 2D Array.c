#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2],b[2][2],c[2][2];

    printf("Enter values of elements of 1st array: \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter value of element a[%d][%d]: \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");


    printf("Enter values of elements of 2nd array: \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter values of b[%d][%d]: \n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("After Addition,\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("c[%d][%d] is %d\n",i,j,c[i][j]);
        }
    }

    return 0;
}
