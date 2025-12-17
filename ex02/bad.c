#include <stdio.h>

int length(char *s)
{
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int main()
{
    char *msg = "hello";
    int len = length(msg);
    printf("len = %d\n", len);
    return 0;
}

