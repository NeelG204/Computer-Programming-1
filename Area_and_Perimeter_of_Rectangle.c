#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter Length and Width of Rectangle =");
    scanf("%f%f",&a,&b);
    c=a*b;
    printf("Area =");
    printf("%.2f*%.2f=%.2f\n",a,b,c);

    d=2.0*(a+b);
    printf("Perimeter =");
    printf("2*(%.2f+%.2f)=%.2f",a,b,d);
    return 0;
}
