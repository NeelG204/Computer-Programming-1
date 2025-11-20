#include<stdio.h>
int main()
{
    char x[]="PDEU";
    char *p=x;

    printf("Characters in array are: \n");
    while(*p!=0)
    {
        printf("%c\t",*p);
        p++;
    }

    return 0;
}
