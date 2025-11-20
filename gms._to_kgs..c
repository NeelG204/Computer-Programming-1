#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter gms. =");
    scanf("%d",&a);
    b=a/1000.0;
    printf("%.2f/1000.0=%.2f kgs",a,b);
    return 0;
}
