#include "shell.h"
/**
 * cmd_check - checks for command in user input
 * @command: Command input
 * Return: pointer to the command
 */
char *cmd_check(char *command)
{
	ssize_t get_num;
	size_t size = 0;

	get_num = getline(&command, &size, stdin);
			
	if (get_num == -1)
	{
		_printf("Exit\n\n\n[Disconnected...]\n");
		free(command);
		exit(1);
	}
	command[strcspn(command, "\n")] = '\0';
	return (command);
}
