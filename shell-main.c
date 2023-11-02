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
		exec_cmd();
		cmd_check();
	}
	return (0);
}
