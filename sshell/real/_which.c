#include "shell.h"

char * _which(char *command)
{
    char *path, *copy_path, *path_token, *dir;
    int command_length, directory_length;
    struct stat testfile;

    /* check if the command given is a directory and pass it directly to execve */
    if (command[0] == '/' || command[0] == '.')
    {
        if (stat(command, &testfile) == 0)
        {
            return (command);
        }
    }

    path = getenv("PATH");
    if (path)
    {
        copy_path = strdup(path);
        command_length = strlen(command);

        path_token = strtok(copy_path, ":");

        while (path_token != NULL)
        {
            directory_length = strlen(path_token);
            dir = malloc(directory_length + command_length + 2); /* add 2 for the slash and null character to be added to the path */
            strcpy(dir, path_token);
            strcat(dir, "/");
            strcat(dir, command);
            strcat(dir, "\0");

            /* check to see if the file that the path gotten points to actually exists */
            if (stat(dir, &testfile) == 0)
            {
                free(copy_path);
                return (dir);
            }

            free(dir);
            path_token = strtok(NULL, ":");
        }

        free(copy_path);
        if (stat(command, &testfile) == 0)
        {
            return (command);
        }

        return (NULL);
    }

    return (NULL);
}