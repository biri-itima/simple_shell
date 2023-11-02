#include "shell.h"
/**
 * main - shell entry point
 *
 * Return: 0
 */
int main(void)
{
	char command[MAX_CMD_LENGTH];

	while (1)
	{
		shell_prompt();
		cmd_check(command, sizeof(command));
		exec_cmd(command);
	}
	return (0);
}
