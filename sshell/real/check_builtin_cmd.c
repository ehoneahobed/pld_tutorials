#include "shell.h"

void check_builtin_cmd(char **args)
{
    int hsh_num_builtins = 0, i;

    struct builtin builtins[] = {
        {"exit", hsh_exit},
        {"cd", hsh_cd},
        {"help", hsh_help},
        {"env", hsh_env},
    };

    /* get the number of builtin commands in the array */
    hsh_num_builtins = sizeof(builtins) / sizeof(struct builtin);

    for (i = 0; i < hsh_num_builtins; i++) {
        if (strcmp(args[0], builtins[i].name) == 0) {
            builtins[i].func(args);
            return;
        }
    }
}

void hsh_exit(char **args) {
    (void)args;
    exit(0);
}

void hsh_cd(char **args) {
    if (args[1] == NULL) {
        fprintf(stderr, "hsh: cd: missing argument\n");
    } else {
        if (chdir(args[1]) != 0) {
            perror("hsh: cd");
        }
    }
}

void hsh_help(char **args) {
    char *helptext =
        "The following commands are available:\n"
        "  cd       Change the working directory.\n"
        "  exit     Exit the shell.\n"
        "  help     Print this help text.\n";
    printf("%s", helptext);

    (void)args;
}

void hsh_env(char **args)
{
    char **env = environ;

    /*for (; *s; s++) {
        printf("%s\n", *s);
    };*/
    while (*env)
      printf("%s\n", *env++);
    

    (void)args;
}