#include "shell.h"

/**
 * main - shell entry point
 * Return: 0
 */
int main(void)
{
	char *command = NULL;
	size_t command_size = 0;
	ssize_t result;

	while (1)
	{
		display_prompt();

		result = getline(&command, &command_size, stdin);
		if (result == -1)
		{
			if (feof(stdin))/* End of file condition */
			{
				break;
			}
			else
			{
				perror("getline");
				exit(EXIT_FAILURE);
			}
		}
		command[strcspn(command, "\n")] = '\0';

		exec_cmd(command);
	}
	free(command);
	_print("\n");
	return (0);
}
