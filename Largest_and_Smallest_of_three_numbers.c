#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(b==c)&&(c==a))
    {
    printf("All are Equal.");
    }
    else if(a==b)
    {
        if(a>c)
        {
        printf("Both %d and %d are greatest",a,b);
        printf("%d is smallest",c);
        }
        else if(c>a)
        {
        printf("%d is greatest",c);
        printf("Both %d and %d are smallest",a,b);
        }
    }
    else if(b==c)
    {
        if(b>a)
        {
        printf("Both %d and %d are greatest",b,c);
        printf("%d is smallest",a);
        }
        else if(a>b)
        {
        printf("%d is greatest",a);
        printf("Both %d and %d are smallest",b,c);
        }
    }
    else if(c==a)
    {
        if(c>b)
        {
        printf("Both %d and %d are greatest",a,c);
        printf("%d is smallest",b);
        }
        else if(b>c)
        {
        printf("%d is greatest",b);
        printf("Both %d and %d are smallest",a,c);
        }
    }
    else if(a>b)
    {
        if((a>c)&&(c>b))
        {
        printf("%d is grestest",a);
        printf("%d is smallest",b);
        }
        else if((a>c)&&(b>c))
        {
        printf("%d is greatest",a);
        printf("%d is smallest",c);
        }
    }
    else if(b>c)
    {
        if((b>a)&&(c>a))
        {
        printf("%d is greatest",b);
        printf("%d is smallest",a);
        }
        else if((b>a)&&(a>c))
        {
        printf("%d is greatest",b);
        printf("%d is smallest",c);
        }
    }
    else if(c>a)
    {
        if((c>a)&&(a>b))
        {
        printf("%d is greatest",c);
        printf("%d is smallest",b);
        }
        else if((c>a)&&(b>a))
        {
        printf("%d is greatest",c);
        printf("%d is smallest",a);
        }
    }
    return 0;
}
