#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter kgs. =");
    scanf("%f",&a);
    b=a*1000.0;
    printf("%.2f*1000.0=%.2f gms",a,b);
    return 0;
}
