#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers =");
    scanf("%d%d",&a,&b);
     if(a>b)
     {
     printf("%d is greater than %d",a,b);
     }
     else if(b>a)
     {
     printf("%d is greater than %d",b,a);
     }
     else
     {
     printf("Both are Equal.");
     }
    return 0;
}
