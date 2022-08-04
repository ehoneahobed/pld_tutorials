#ifndef _MAIN_H_
#define _MAIN_H_

/* standard library header files needed */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


/* prototypes for functions created */
char** generate_tokens(char *line_read, ssize_t num_read);
char *read_line(ssize_t *num_read);
int execute_command(char **tokens);

#endif