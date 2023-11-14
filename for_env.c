#include "shell.h"

/**
 * for_env - print the env variables
 */

void for_env(void)
{
	extern char **environ;
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
