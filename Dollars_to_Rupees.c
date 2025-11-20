#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Amount in $"),
    scanf("%f",&a);
    b=a*48.0;
    printf("Total Amount = Rs.");
    printf("%.2f*48.0=%.2f",a,b);
    return 0;
}
