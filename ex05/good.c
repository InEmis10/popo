#include <stdio.h>

/* Check pointer validity before dereferencing. [web:6][web:8] */
void printFirstElement(const int *array, int size)
{
    if (array == NULL || size <= 0) {
        printf("invalid array\n");
        return;
    }
    printf("first = %d\n", array[0]);
}

int main(void)
{
    int numbers[3] = {1, 2, 3};
    int *pointer = NULL;

    /* Properly initialize pointer when needed. */
    pointer = numbers;
    printFirstElement(pointer, 3);
    return 0;
}

