#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter 1st Number =");
    scanf("%d",&a);
    printf("Enter 2nd Number =");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping: ");
    printf("a is %d and b is %d",a,b);
    return 0;
}
