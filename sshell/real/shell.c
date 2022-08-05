#include "shell.h"

int main()
{
    /* declaration of variables */
    char *line_read, **tokens;
    ssize_t num_read;
    int return_code = 0;

    /* create a loop for the shell (show prompt-> read -> parse -> execute then repeat) */

    while (1)
    {
        /* check for command line arguments */
        
        /* show prompt on terminal */
        write(2, "$ ", 2);

        /* read what the user types into the terminal */
        line_read = read_line(&num_read);

        /* check if read_line failed to read or reached EOF */
        if (num_read == -1){
            write(2, "Exiting shell....\n", 18);
            exit(1);
        }

        /* parse the line read into individual tokens */
        tokens = generate_tokens(line_read, num_read);

        /* execute the command */
        if (tokens[0] != NULL)
        {
            return_code = execute_command(tokens);
        }

        /* free memory that were allocated */
        free(tokens);
        free(line_read);

    }

    return (return_code);
}