#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Radius of Circle= ");
    scanf("%f",&a);
    b=22/7.0*a*a;
    printf("Area of Circle= ");
    printf("22/7*%.2f%.2f=%.2f",a,a,b);
    return 0;
}
