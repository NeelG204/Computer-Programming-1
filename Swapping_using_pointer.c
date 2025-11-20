#include<stdio.h>
int main()
{
    int x=50,y=100;
    int *p,*q,*r;

    p=&x;
    q=&y;

    *r=*p;
    *p=*q;
    *q=*r;

    printf("After swapping: \n");
    printf("x is %d, y is %d",*p,*q);

    return 0;
}
