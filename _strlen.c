#include "shell.h"

/**
 * _strlen - mock up of the strlen
 * @s: string
 * Return: counter on success
 */
int _strlen(char *s)
{
	int i, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
