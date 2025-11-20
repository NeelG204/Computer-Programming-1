#include<stdio.h>
int main()
{
    int x=50;
    int *p;

    p=&x;

    printf("Address: %d\n",p);
    printf("Value: %d\n",*p);

    return 0;
}
