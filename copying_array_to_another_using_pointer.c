#include<stdio.h>
int main()
{
    int i,source[]={10,20,30,40,50};
    int destination[5];

    int *s=source;
    int *d=destination;

    for(i=0;i<5;i++)
    {
        *d=*s;
        s++;
        d++;
    }

    printf("Sourced Array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",source[i]);
    }
    printf("\n\n");

    printf("Final Array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",destination[i]);
    }

    return 0;
}
