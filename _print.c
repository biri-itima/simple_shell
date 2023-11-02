#include "shell.h"
/**
 * _printf - prints msg to the stdout
 * @msg: characters to be printed
 */
void _printf(const char *msg)
{
	write(STDOUT_FILENO, msg, strlen(msg));
}
