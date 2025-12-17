#include <stdio.h>
#include <stdlib.h>

char *make_msg(const char *name)
{
    char buffer[64];
    sprintf(buffer, "Hello %s", name);
    return buffer;
}

int main()
{
    char *msg = make_msg("world");
    printf("%s\n", msg);
    free(msg);
    return 0;
}

