#include <stdio.h>

void static print_first(int *array, int size)
{
    if (!array) {
        return;
    printf("first = %d\n", array[0]);
}

int main()
{
    int *p = NULL;
    int a[3] = {1, 2, 3};

    p = a;
    print_first(p, 3);
    return 0;
}

