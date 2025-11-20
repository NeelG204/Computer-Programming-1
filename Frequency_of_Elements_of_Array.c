#include<stdio.h>
int main()
{
    int count[10],a[10],b[10];

    printf("Enter Values: \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        count[i]=1;
        b[i]=a[i];
    }

    for(int i=0;i<10;i++)
    {
        if(b[i]>-1)
        {
            for(int j=i+1;j<10;j++)
            {
                if(b[i]==b[j])
                {
                    count[i]++;
                    b[j]=-1;
                }
            }
        }

        if(b[i]>-1)
        {
            printf("Frequency of %d is %d\n",a[i],count[i]);
        }
    }

    return 0;
}
