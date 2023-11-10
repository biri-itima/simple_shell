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
	if (get_num <= 0)
	{
		if (feof(stdin))
		{
			_printf("Exit\n");
			free(command);
			exit(EXIT_SUCCESS);
		}
	}
	else if (get_num == -1)
	{
		perror("Error");
		free(command);
		exit(EXIT_FAILURE);
	}
	command[strcspn(command, "\n")] = '\0';
	return (command);
}
