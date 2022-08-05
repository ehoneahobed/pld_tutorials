#include "shell.h"

int execute_command(char **tokens)
{
    pid_t child_pid;
    char *command, **envp;
    
    envp = environ;

    /* check if command exist and generate the path for the command */
    command = _which(tokens[0]);
    if (command == NULL)
    {
        return (-1);
    }
    
    child_pid = fork(); /* create a new child process */

    if (child_pid == 0) {
        execve(command, tokens, envp);
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