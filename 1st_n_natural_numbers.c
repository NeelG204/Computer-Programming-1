#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of Natural Numbers to print: ");
    scanf("%d",&n);

    printf("First %d Natural Numbers are : \n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
return 0;
}
