#include<stdio.h>
int main()
{
    char *string[]={"First","Second","Third","Fourth","Fifth"};

    char **p=string;

    printf("The Third String is %s",*(p+2));

    return 0;
}
