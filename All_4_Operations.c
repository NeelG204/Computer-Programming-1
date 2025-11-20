#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter Values");
    scanf("%d%d",a,b);
    c=a+b;
    printf("Addition of two numbers= ");
    printf("%d+%d=%d\n",a,b,c);
    d=a-b;
    printf("Subtraction of two numbers= ");
    printf("%d-%d=%d\n",a,b,d);
    e=a*b;
    printf("Multiplication of two numbers= ");
    printf("%d*%d=%d\n",a,b,e);
    f=a/b;
    printf("Division of two numbers= ");
    printf("%d/%d=%d",a,b,f);
    return 0;
}
