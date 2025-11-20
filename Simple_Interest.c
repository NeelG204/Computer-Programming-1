#include<stdio.h>
int main()
{
    int i,n;
    float p,r,SI;
    for(i=1;i<=3;i++)
    {
        printf("Enter Principle: ");
        scanf("%f",&p);
        printf("Enter Rate: ");
        scanf("%f",&r);
        printf("Enter Term: ");
        scanf("%d",&n);

        SI=p*n*r/100;
        printf("Simple Interest= %f\n",SI);
    }
    return 0;
}
