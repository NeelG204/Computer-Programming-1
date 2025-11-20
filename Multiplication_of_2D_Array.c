#include<stdio.h>
int main()
{
    int i,j,k;
    int a[2][2],b[2][2],c[2][2];

    printf("Enter values of elements of 1st Matrix: \n");   //Taking values for 1st Matrix

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter value of element a[%d][%d]: \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");

    printf("Enter values of elements of 2nd Matrix: \n");    //Taking Value for 2nd Matrix

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter value of element b[%d][%d]: \n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
        }
    }

    for(i=0;i<2;i++)    //Matrix Multiplication
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("After Multiplication,\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Element c[%d][%d] is %d.\n",i,j,c[i][j]);
        }
    }

    return 0;
}
