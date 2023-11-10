#include"shell.h"

/**
 * location - check for PATH and tokenized it
 * @path: stores the PATH to be tokenized
 * @arg: stores the command entered by user
 * Return: tokenized PATH
 */

char *location(char *path, char *arg)
{
	char *path_cpy, *path_tok, *path_holder, *delim = ":";

	path_cpy = strdup(path);
	if (path_cpy == NULL)
	{
		perror("Memory allocation error");
        	exit(EXIT_FAILURE);
	}

	path_tok = strtok(path_cpy, delim);

	while (path_tok != NULL)
	{
        	path_holder = (char *)malloc(strlen(path_tok) + strlen(arg) + 2);
        	if (path_holder == NULL)
        	{
			perror("Memory allocation error");
            		free(path_cpy);
            		exit(EXIT_FAILURE);
        	}

        	strcpy(path_holder, path_tok);
        	strcat(path_holder, "/");
        	strcat(path_holder, arg);

        	if (access(path_holder, X_OK) == 0)
        	{
            		free(path_cpy);
            		return (path_holder);
        	}

        	free(path_holder);
        	path_tok = strtok(NULL, delim);
    	}	

    	free(path_cpy);
    	return (NULL);
}

/**

*/

char *get_loc(char *arg)
{
	char *path = getenv("PATH");
    	if (path)
    	{
        	return (location(path, arg));
    	}

    	return (NULL);
}

