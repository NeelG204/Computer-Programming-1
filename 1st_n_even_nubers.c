#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of Even Numbers to print :");
    scanf("%d",&n);

    printf("First %d Even Numbers are\n",n);
    for(int a=1;a<=n;a++)
    {
        i=2*a;
        printf("%d\n",i);
    }
return 0;
}
