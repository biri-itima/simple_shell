#include"shell.h"

/**
 * location - 
 * Return: ..
 */

char *location(char *path, char arg)
{
	char *path_cpy, *path_tok, *path_holder, *delim = ":";

	path_cpy = strdup(path);

	path_tok = strtok(path_cpy, delim);

	while (path_tok != NULL)
	{
		strcpy(path_holder, path_tok);
		strcat(path_holder, "/");
		strcat(path_holder
	}
}
