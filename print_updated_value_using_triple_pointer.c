#include<stdio.h>
int main()
{
    int x=99;
    int *p=&x;
    int **q=&p;
    int ***r=&q;

    printf("Value of x: %d",***r);

    return 0;
}
