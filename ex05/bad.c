#include <stdio.h>

void print_first(int *array, int size)
{
    printf("first = %d\n", array[0]);
}

int main()
{
    int *p = NULL;
    int a[3] = {1, 2, 3};

    if (0) {
        p = a;
    }
    print_first(p, 3);
    return 0;
}

