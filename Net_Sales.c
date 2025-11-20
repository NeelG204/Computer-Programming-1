 #include<stdio.h>
int main()
{
    float a,discount,net_sales;
    printf("Enter Gross Sales= Rs.");
    scanf("%f",&a);
    if(a>20000)
    {
    discount=(15/100.0)*a;
    }
    else if((a>10000)&&(a<=20000))
    {
    discount=(10/100.0)*a;
    }
    else
    {
    discount=(5/100.0)*a;
    }
    net sales=a-discount;
    printf("Net Sales= Rs.");
    printf("%.2f-%.2f=%.2f",a,discount,net_sales);
    return 0;
}
