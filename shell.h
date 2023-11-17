#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_CMD 100
#define MAX_ARG 125
void _print(char *msg);
void display_prompt(void);
int _strlen(char *s);
void exec_cmd(char *command);
#endif
