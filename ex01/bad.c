#include <stdio.h>

int calc(int a, int b)
{
    int resultat = a + b;
    
    return resultat;
}

int main()
{
    int x = 5;
    int y = 7;
    int r = 0;

    r = calc(x, y);
    printf("Result: %d\n", r);
    return 0;
}

