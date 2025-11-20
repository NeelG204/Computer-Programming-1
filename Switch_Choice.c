#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("Enter two integers =");
    scanf("%d%d",&num1,&num2);
    printf("Choose an Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            result=num1+num2;
            printf("Result=%d\n",result);
        case 2:
            result=num1-num2;
            printf("Result=%d\n",result);
        case 3:
            result=num1*num2;
            printf("Result=%d\n",result);
        case 4:
            if(num2!=0)
            {
                result=num1/num2;
                printf("Result=%d\n",result);
            }
            else
            {
                printf("Division by zero is not allowed");
            }
            break;
    }
    return 0;
    }
