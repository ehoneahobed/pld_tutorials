#include "shell.h"

int execute_command(char **tokens)
{
    pid_t child_pid = fork(); /* create a new child process */

    if (child_pid == 0) {
        execvp(tokens[0], tokens);
        perror(tokens[0]);
        return (-1);
    } else if (child_pid > 0) {
        int status;
        do {
            waitpid(child_pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    } else {
        perror("hsh");
        return (-1);
    }
    return (0);
}