#include "shell.h"

char *read_line(ssize_t *num_read)
{
    char *buffer = NULL;
    size_t n = 0;

    *num_read = getline(&buffer, &n, stdin);
    return (buffer);
}