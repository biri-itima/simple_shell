#include "shell.h"

/**
 * exec_cmd - execute command line
 * @command: command line
 */

void exec_cmd(char *command)
{
	pid_t pid = fork();
	int status;
	char *args[2];

	if (pid == -1)
	{
		perror("fork");
	}
	else if (pid == 0)
	{
		/*child pid*/
		args[0] = command;
		args[1] = NULL;
		if (execve(command, args, NULL) < 0)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
