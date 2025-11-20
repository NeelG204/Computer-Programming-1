#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};

    int *p=&a[1];
    int *q=&a[3];

    printf("Before Swap: \n");
    printf("a[1]=%d, a[3]=%d",*p,*q);
    printf("\n\n");

    *p=*p^*q;
    *q=*p^*q;
    *p=*p^*q;

    printf("Final Array: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
