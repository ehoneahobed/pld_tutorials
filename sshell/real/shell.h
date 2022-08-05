#ifndef _MAIN_H_
#define _MAIN_H_

/* standard library header files needed */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/* global environment variables */
extern char **environ;

/* struct for built-in commands */
struct builtin {
    char *name;
    void (*func)(char **args);
};

/* prototypes for functions created */
char** generate_tokens(char *line_read, ssize_t num_read);
char *read_line(ssize_t *num_read);
int execute_command(char **tokens);

/* prototype for functions relating to built-in commands */
void check_builtin_cmd(char **args);
void hsh_exit(char **args);
void hsh_cd(char **args);
void hsh_help(char **args);
void hsh_env(char **args);


/* prototypes for standard library functions that we recreate */
char * _which(char *command);

#endif