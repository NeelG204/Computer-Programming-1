#include<stdio.h>
int main()
{
    int x=50,y=100;
    int *p,*q,*r;

    p=&x;
    q=&y;

    *r=*p+*q;

    printf("Addition of both is %d",*r);

    return 0;
}
