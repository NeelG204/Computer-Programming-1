#include<stdio.h>
int main()
{
    int i,arr[10];
    printf("Enter Numbers: \n");
    for(i=0;i<9;i++)
    {
        scanf("%d\n",&arr[i+1]);
    }

    for(i=0;i<10;i++)
    {
        if((i==4)||(i==7)||(i==9))
        {
            printf("%dth number is: ",arr[i]);
            printf("%d\n",arr[i]);
        }
    }



    return 0;
}
