#include <stdio.h>

void write_log(char *filename, char *msg)
{
    FILE *f = fopen(filename, "a");
    fprintf(f, "%s\n", msg);
    fclose(f);
}

int main()
{
    write_log("log.txt", "hello");
    return 0;
}

