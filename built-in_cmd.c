#include "shell.h"
#include <unistd.h>

/**
 * built_in_cmd - prints the built in command
 * @arg: user command
 * Return: integer
 */

int built_in_cmd(char **arg)
{
	if (strcmp(arg[0], "exit") == 0)
	{
		_printf("Exit\n\n\n[Disconnected...]\n");
		exit(0);
	}
	else if (strcmp(arg[0], "cd") == 0)
	{
		if (arg[1] == NULL)
			chdir(getenv("HOME"));
		else
			chdir(arg[1]);
	}
	return (0);
}
