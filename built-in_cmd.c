#include "shell.h"
#include <unistd.h>

/**
 * built_in_cmd - prints the built in command
 * @arg: user command
 * Return: integer
 */

int built_in_cmd(char **arg)
{
	int status;

	if (strcmp(arg[0], "exit") == 0)
	{
		if (arg[1] == NULL)
		{
		
			_printf("Exit\n\n\n[Disconnected...]\n");
			exit(0);
		}
		else
		{
			status = atoi(arg[1]);
			_printf("Exit\n\n\n[Disconnected...]\n");
			exit(status);
		}
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
