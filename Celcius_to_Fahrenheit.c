#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Temp. in celcius= ");
    scanf("%f",&a);
    b=(9/5.0*a)+32;
    printf("Final Temperature in fahrenheit= ");
    printf("(9/5*%.2f)+32=%.2f",a,b);
    return 0;
}
