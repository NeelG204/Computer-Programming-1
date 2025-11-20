#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter Amount of bytes");
    scanf("%f",&a);
    b=a/1024.0;
    printf("Number of KB =");
    printf("%.2f/1024=%.2f\n",a,b);
    c=b/1024.0;
    printf("Number of MB =");
    printf("%.2f/(1024)=%.2f\n",b,c);
    d=c/(1024.0);
    printf("Number of GB =");
    printf("%.2f/(1024)=%.2f",c,d);
    return 0;
}
