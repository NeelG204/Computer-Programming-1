#include<stdio.h>
int main()
{
    int x=50;
    int *p=&x;

    int **q=&p;

    printf("Original Value is %d",**q);

    return 0;
}
