#include<stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter Values: ");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Division =");
    printf("%d/%d=%.2f",a,b,c);
    return 0;
}
