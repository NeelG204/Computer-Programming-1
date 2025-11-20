#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Minutes =");
    scanf("%f",&a);
    b=a/60.0;
    printf("Total Hrs. =");
    printf("%.2f/60=%.2f",a,b);
    return 0;
}
