#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char lower[100]="abcdefghijklmnopqrstuvwxyz";
    char upper[100]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str[100];
    printf("enter your string : ");
    gets(str);
        // Toggle case using lookup method
    for (int i = 0; i < strlen(str); i++)
        {
        // Check if character is in lowercase string
        for (int j = 0; j < 26; j++)
            {
                if (str[i] == lower[j])
                {
                    str[i] = upper[j]; // Convert to uppercase
                    break;
                }
                if (str[i] == upper[j])
                {
                    str[i] = lower[j]; // Convert to lowercase
                    break;
                }
            }
        // Non-alphabetic characters are left unchanged
        }

    printf("Toggled case string: %s\n", str);

    return 0;
}

