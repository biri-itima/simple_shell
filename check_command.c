#include "shell.h"
/**
 * cmd_check - checks for command in user input
 * @command: Command input
 * @size: size
 */
void cmd_check(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			_printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			_printf("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
