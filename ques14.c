#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value of ptr: %p\n", ptr);

    (*ptr)++; // increment the value pointed by ptr

    printf("Value of num after increment: %d\n", num);
    printf("Value of ptr after increment: %p\n", ptr);

    return 0;
}
