#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("Enter numbers: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The Numbers are: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
