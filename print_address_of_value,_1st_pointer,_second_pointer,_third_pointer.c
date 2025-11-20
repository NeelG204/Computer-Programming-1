#include<stdio.h>
int main()
{
    int x=50;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("Value of x: %d\n",x);
    printf("Value of 1st pointer(Address of x): %d\n",p);
    printf("Value of double pointer(Address of 1st pointer): %d\n",q);
    printf("Value of triple pointer(Address of double pointer): %d\n",r);
    printf("Address of triple pointer: %d\n",&r);

    return 0;
}
