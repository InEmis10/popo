#include <stdio.h>
#include <stdlib.h>

int * creat_tab(int size)
{
    int *p;
    int i;

    p = malloc(size * sizeof(int));
    for (i = 0; i < size; i++) {
        p[i] = i;
    }
    return p;
}

int main()
{
    int *t;
    int n = 5;
    int i;

    t = creat_tab(n);
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}

