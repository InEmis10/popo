#include <stdio.h>

int moyenne(int tab[], int n)
{
    int i;
    int s = 0;

    for (i = 0; i < n; i++) {
        s += tab[i];
    }
    if (n == 0) {
        return 0;
    }
    return s / n;
}

int main()
{
    int t[4] = {10, 20, 30, 40};
    int m = moyenne(t, 4);

    printf("moy = %d\n", m);
    return 0;
}

