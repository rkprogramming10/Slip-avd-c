#include <stdio.h>
#include <string.h>

static void print_reversed(const char *str, size_t len)
{
    const char *ptr = str + len;
    while (ptr > str)
        putchar(*--ptr);
}

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        if (i != 0)
            putchar(' ');
        print_reversed(argv[i], strlen(argv[i]));
    }
    putchar('\n');
    return 0;
}