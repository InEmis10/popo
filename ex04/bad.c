#include <stdio.h>
#include <stdlib.h>

static int *create_tab(int size)
{
    int *p;
    
    p = malloc((size + 1) * sizeof(int));
    if (!p)
        return NULL;
    for (int i = 0; i < size; i++) {
        p[i] = i;
    }
    return p;
}

int main()
{
    int n = 5;
    int *t = creat_tab(n);;

    if (!t) {
        return 84;
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}

