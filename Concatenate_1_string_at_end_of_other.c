#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter 1st String: \n");
    gets(s1);
    printf("Enter 2nd String: \n");
    gets(s2);
    strcat(s1,s2);
    printf("The Final String is %s ",s1);

    return 0;
}
