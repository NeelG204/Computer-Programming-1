#include<stdio.h>
int main()
{
    int i,x[]={10,20,30,40,50};
    int *p=x;

    int *q;
    q=&x[2];

    printf("Your Array: \n");
    for(i=0;i<5;i++)
    {
        if(*p!=*q)
        {
            printf("%d\t",x[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}
