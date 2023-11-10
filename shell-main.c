#include "shell.h"
/**
 * main - shell entry point
 *
 * Return: 0
 */
int main(void)
{
	char *command = NULL;
	char *arg[MAX_CMD_LENGTH], *delim = " \n", *path;
	int i;


	while (1)
	{
		if (isatty(0))
			shell_prompt();
		command = cmd_check(command);

		i = 0;
		arg[i] = strtok(command, delim);
		while (arg[i])
		{
			arg[++i] = strtok(NULL, delim);
		}
		arg[i] = NULL;
		path = get_loc(arg[0]);

		if (path == NULL)
		{
			_printf("command not found\n");
		}
		else
		{
			exec_cmd(path, arg);
		}
	}
	free(command);
	return (0);
}
