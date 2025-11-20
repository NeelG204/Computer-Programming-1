#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Amount in Rs.");
    scanf("%f",&a);
    b=a/48.0;
    printf("Total Amount =$");
    printf("%.2f/48.0=%.2f",a,b);
    return 0;
}
