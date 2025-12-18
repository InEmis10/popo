#include <stdio.h>

int length(char *s)
{
    int i = 0;
    
    for (; s[i] != '\0'; i++);
    return i;
}

int main()
{
    char *msg = "hello";
    
    printf("len = %d\n", length(msg));
    return 0;
}

