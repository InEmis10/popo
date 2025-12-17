#include <stdio.h>

int helper(int n)
{
    return n * 2;
}

int main()
{
    int x = 3;
    int y = helper(x);
    printf("%d\n", y);
    return 0;
}

