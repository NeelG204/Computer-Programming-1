#include<stdio.h>
int main()
{
    int x=50;
    int *p;

    p=&x;

    printf("Value of x: %d",*p);

    return 0;
}
