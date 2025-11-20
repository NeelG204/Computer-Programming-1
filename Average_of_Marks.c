#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter Marks= \n");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    printf("Total= ");
    printf("%d+%d+%d=%d\n",a,b,c,d);
    e=(a+b+c)/3.0;
    printf("Average of Marks= ");
    printf("(%d+%d+%d)/3=%.2f",a,b,c,e);
    return 0;
}
