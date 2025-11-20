#include <stdio.h>

int main() {
    int value = 42;
    int *ptr1 = &value;
    int *ptr2 = &value;
    int *ptr3 = NULL;

    // Compare ptr1 and ptr2 (both point to value)
    if (ptr1 == ptr2)
    {
        printf("Confirmed");
    }
    else
    {
        printf("NO");
    }

    printf("\n\n");

    // Compare ptr1 and ptr3 (different locations)
    if (ptr1 == ptr3)
    {
        printf("Comfirmed");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
