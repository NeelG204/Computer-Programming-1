#include<stdio.h>
int main()
{
    int total_students[50];
    int boy=0,girl=0;
    char gender;

    printf("Enter gender of all students. ('M' for boy, 'F' for girl): \n");

    for(int i=0;i<50;i++)
    {
        printf("Enter gender of student %d: ",i+1);
        scanf(" %c",&gender);

        if(gender=='M')
        {
            boy++;
        }
        else if(gender=='F')
        {
            girl++;
        }
        else
        {
            printf("Invalid Input!\n");
            i--;
        }
    }

    printf("Number of Boys are %d. \n",boy);
    printf("Number of Girls are %d. \n",girl);

    return 0;
}
