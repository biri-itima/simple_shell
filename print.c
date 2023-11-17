#include "shell.h"

/**
 * _print - print message to STDOUT
 * @msg: message to be printed
 */

void _print(char *msg)
{
	write(STDOUT_FILENO, msg, _strlen(msg));
}
