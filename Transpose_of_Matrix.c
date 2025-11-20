#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[4][4];
    printf("Enter values of elements of matrix: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter value of element a[%d][%d]: \t",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Your Original Matrix is: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("After Transpose: \n");
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
           a[j][i]=temp;
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
