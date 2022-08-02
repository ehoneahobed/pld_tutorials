#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char **environ;

int main(void){
    char *buffer = NULL, *copy_buffer = NULL;
    ssize_t num_read;
    size_t n = 0;
    char *token;
    char *delim = " \n";
    int num_tokens = 0, i = 0;
    char **argv;

    printf("$ ");
    num_read = getline(&buffer, &n, stdin);

    if (num_read == -1){
        printf("Exiting shell....\n");
        return (-1);
    }

    // printf(">>>>>> %s\n", buffer);
    // printf("%ld \n",  num_read);

    /* to copy what the user typed, let's allocate enough space for it */
    copy_buffer = malloc(sizeof(char) * num_read);

    /* copy the content of buffer to copy_buffer */
    strcpy(copy_buffer, buffer);

    /* get the number of tokens to be created */
    token = strtok(buffer, delim);
    
    while(token != NULL){
        num_tokens++;
        token = strtok(NULL, delim);
    }
    num_tokens++;
    

    argv = malloc(sizeof(char *) * num_tokens);

    /* get the tokens and save them as arguments in argv */
    token = strtok(copy_buffer, delim);
    while(token != NULL){
        /* allocate space for each token */
        argv[i] = malloc(sizeof(char) * strlen(token));
        strcpy(argv[i], token);    
        i++;
        token = strtok(NULL, delim);
    }
    argv[i] = NULL;

    

    /* execute the commands */
    if (execve(argv[0], argv, environ) == -1){
        perror("Error ");
    }
    
}