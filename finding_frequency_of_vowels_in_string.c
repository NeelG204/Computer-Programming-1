#include<stdio.h>
#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter a string: \n");
    gets(s);

    char lower[100]="abcdefghijklmnopqrstuvwxyz";
    char upper[100]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a=0,e=0,i=0,o=0,u=0;

    for(int k=0;k<strlen(s);k++)
    {
            if(s[k]=='a' || s[k]=='A')
            {
                a++;
            }
            else if(s[k]=='e' || s[k]=='E')
            {
                e++;
            }
            else if(s[k]=='i' || s[k]=='I')
            {
                i++;
            }
            else if(s[k]=='o' || s[k]=='O')
            {
                o++;
            }
            else if(s[k]=='u' || s[k]=='U')
            {
                u++;
            }
    }

    printf("Number of A are %d\n",a);
    printf("Number of E are %d\n",e);
    printf("Number of I are %d\n",i);
    printf("Number of O are %d\n",o);
    printf("Number of U are %d\n",u);

    return 0;
}
