#include<stdio.h>
int main()
{
    int a,b,c,total;
    float average;
    printf("Enter Marks= \n");
    scanf("%d%d%d",&a,&b,&c);

    total=a+b+c;
    printf("Total= %d\n",total);

    average= total/3.0;
    printf("Average= %.2f\n",average);
    if(average>=70)
    {
    printf("distinction");
    }
    else if((average>=60)&&(average<70))
    {
    printf("first");
    }
    else if((average>=50)&&(average<60))
    {
    printf("second");
    }
    else if((average>=35)&&(average<50))
    {
    printf("third class");
    }
    else if(average<35)
    {
    printf("fail");
    }
    return 0;
}
