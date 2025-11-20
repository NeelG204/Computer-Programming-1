#include<stdio.h>
int main()
{
    int i;
    int a[]={10,20,30,40,50};
    int *p=a;
    int *q=a+4;

    printf("Your Original Array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");


    printf("\nYour reversed Array: \n");
    while(q>=p)
    {
        printf("%d\t",*q);
        q--;
    }

    return 0;
}
