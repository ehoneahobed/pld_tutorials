#include "shell.h"

char** generate_tokens(char *line_read, ssize_t num_read)
{
    char *copy_line_read;
    char *delim = " \n";
    int num_tokens = 0, i = 0;
    char *token, **tokens;

    /* to copy what the user typed, let's allocate enough space for it */
    copy_line_read = malloc(sizeof(char) * num_read);

    /* copy the content of line_read to copy_line_read */
    strcpy(copy_line_read, line_read);

    /* get the number of tokens to be created */
    token = strtok(line_read, delim);
    while(token != NULL){
        num_tokens++;
        token = strtok(NULL, delim);
    }
    num_tokens++;

    /* allocate space for pointers to each of the strings (tokens) to be generated */
    tokens = malloc(sizeof(char *) * num_tokens);

    /* get the individual tokens and save them as strings */
    token = strtok(copy_line_read, delim);
    while(token != NULL){
        /* allocate space for each token */
        tokens[i] = malloc(sizeof(char) * strlen(token));
        strcpy(tokens[i], token);    
        
        /* for debugging purposes */
        /* printf(">>>>>> %s\n", argv[i]);  */
        /**********************************/  
        i++;
        token = strtok(NULL, delim);
    }
    tokens[i] = NULL;

    return (tokens);
}