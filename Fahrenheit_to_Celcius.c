#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Temp. in fahrenheit.= ");
    scanf("%f",&a);
    b=5/9.0*(a-32);
    printf("Final Temperaturein celcius= ");
    printf("5/9*(%.2f-32)=%.2f",a,b);
    return 0;
}
