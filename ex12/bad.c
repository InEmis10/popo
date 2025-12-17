#include <stdio.h>
#include <stdlib.h>

int* build(int n)
{
    int *t = malloc(n * sizeof(int));
    int i;

    for (i = 0; i <= n; i++) {
        t[i] = i;
    }
    return t;
}

void show(int *t, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
    free(t);
}

int main()
{
    int *tab = build(5);
    show(tab, 5);
    free(tab);
    return 0;
}

