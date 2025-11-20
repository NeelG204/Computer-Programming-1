#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter Amount in $");
    scanf("%f",&a);
    b=a*48.0;
    printf("Amount in Rupees: %.2f\n",b);

    c=b/70.0;
    printf("Total Amount =£");
    printf("(%.2f/70.0)=%.2f",b,c);
    return 0;
}
