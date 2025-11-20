#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Hrs.= ");
    scanf("%f",&a);
    b=60.0*a;
    printf("Total Minutes =");
    printf("%.2f*60=%.2f",a,b);
    return 0;
}
