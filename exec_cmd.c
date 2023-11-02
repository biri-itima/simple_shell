#include "shell.h"

/**
 * exec_cmd - executing our commands
 * @command: command to be executed
 */
void exec_cmd(const char *command)
{
	char *args[] = {NULL, NULL};
	pid_t child_pid = fork();
	/** The fork function was used to create the process
	 * and the pid_t function assigns the process to the
	 * data type
	 */
	if (child_pid < -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		args[0] = (char *)command;

		if (execve(command, args, NULL) < -1)
		{
			_printf("./shell: NO such file or directory\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
