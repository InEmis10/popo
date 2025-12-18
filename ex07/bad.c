#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 3
    int *p = malloc(size * sizeof(int));

    if (!p) {
        return 84;
    for (int i = 0; i < size; i++) {
        p[i] = i;
    }

    /* result of realloc is ignored, possible leak or invalid pointer use */
    size = 6;
    realloc(p, size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}

