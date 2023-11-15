#include "shell.h"

/**
 * exec_cmd - executing our commands
 * @arg: command to be executed
 * @path: path to be executed
 */

void exec_cmd(char *path, char *arg[])
{
	pid_t child_pid = fork();
	int status;

	/**
	 * The fork function was used to create the process
	 * and the pid_t function assigns the process to the
	 * data type
	 */

	if (child_pid < 0)
	{
		_printf("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		if (execve(path, arg, NULL) < 0)
		{
			perror("execve");
			_printf("command not found");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
}
