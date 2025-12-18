#include <stdio.h>

static void calc_square(int *res, int x)
{
    *res = x * x;
}

int main()
{
    int n = 5;
    int r = 0;

    calc_square(&r, n);
    printf("%d\n", r);
    return 0;
}

