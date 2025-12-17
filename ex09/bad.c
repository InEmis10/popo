#include <stdio.h>

int main()
{
    int i;
    int sum;
    int a[3] = {1, 2, 3};

    for (i = 0; i < 3; i++) {
        sum += a[i];
    }
    printf("sum = %d\n", sum);
    return 0;
}

