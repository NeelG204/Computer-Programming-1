#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter size of Square =");
    scanf("%f",&a);
    b=a*a;
    printf("Area of Square= ");
    printf("%.2f*%.2f=%.2f\n",a,a,b);
    
    c=a*4.0;
    printf("Perimeter of Square= ");
    printf("%.2f*4=%.2f",a,c);
    return 0;
}
