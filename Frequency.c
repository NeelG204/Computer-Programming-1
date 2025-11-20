#include<stdio.h>
int main()
{
    int count=0;
    int a[10];

    printf("Enter values: \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        printf("Frequency of %d is %d\n",a[i],count);
    }

    return 0;
}
