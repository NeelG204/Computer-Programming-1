#include<stdio.h>
int main()
{
    float a,allowance,deduction,net_salary;
    printf("Enter Gross Salary= Rs.");
    scanf("%f",&a);
    if (a>10000)
    {
    allowance=a/10.0;
    deduction=(3/10.0)*a;
    }
    else if ((a>5000)&&(a<=10000))
    {
    allowance=(7/10.0)*a;
    deduction=(2/10.0)*a;
    }
    net_salary=a+allowance-deduction;
    printf("Net Salary= Rs.");
    printf("%.2f+%.2f-%.2f=%.2f",a,allowance,deduction,net_salary);
    return 0;
}
