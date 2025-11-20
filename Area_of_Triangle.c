#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter Length and Height of Triangle= ");
    scanf("%f%f",&a,&b);
    c=(a*b)/2.0;
    printf("Area of Traingle= ");
    printf("(%.2f*%.2f)/2=%.2f",a,b,c);
    return 0;
}
