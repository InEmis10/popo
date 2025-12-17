#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(3 * sizeof(int));
    int i;

    for (i = 0; i < 3; i++) {
        p[i] = i;
    }

    /* result of realloc is ignored, possible leak or invalid pointer use */
    realloc(p, 6 * sizeof(int));

    for (i = 0; i < 6; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}

