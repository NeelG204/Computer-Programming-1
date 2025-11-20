#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of Odd Numbers to print: ");
    scanf("%d",&n);

    printf("First %d Odd Numbers are \n",n);
    for(int a=1;a<=n;a++)
    {
        i=(2*a)-1;
        printf("%d\n",i);
    }
return 0;
}
