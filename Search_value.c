#include<stdio.h>
int main()
{
    int i,n,s;

    printf("Enter number of elements: \n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the position of element you want to search: ");
    scanf("%d",&s);

    printf("The Number is: ");
    for(i=1;i<=n;i++)
    {
        if(i==s)
        {
            printf("%d",arr[i]);
        }
    }

    return 0;
}
