#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    printf("Enter 1st string: \n");
    gets(s);

    int t[100];
    printf("Enter 2nd string: \n");
    gets(t);

    int i=strlen(s);
    int j=strlen(t);

    printf("Length of 1st string is %d\n",i);
    printf("Length of 2nd string is %d\n",j);


    if(i>j)
    {
        printf("String 1 is greater than String 2.\n");
    }
    else if(j>i)
    {
        printf("String 2 is greater than String 1.\n");
    }
    else
    {
        printf("Both Strings are equal.\n");
    }
    return 0;
}
