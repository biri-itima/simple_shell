#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAX_CMD_LENGTH 100

void _printf(const char *msg);
void shell_prompt(void);
void exec_cmd(const char *command);
void cmd_check(char *command, size_t size);
#endif
