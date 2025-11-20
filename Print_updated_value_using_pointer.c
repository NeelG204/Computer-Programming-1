#include <stdio.h>

int main()
{
    int num = 10;
    int *p;

    printf("Original value: %d\n", num);

    p = &num;
    *p = 25;

    printf("Updated value: %d\n", num);

    return 0;
}
