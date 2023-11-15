#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAX_CMD_LENGTH 100

extern char **environ;

void _printf(const char *msg);
void shell_prompt(void);
void exec_cmd(char *path, char *arg[]);
char *cmd_check(char *command);
char *location(char *path, char *arg);
char *get_loc(char *arg);
int built_in_cmd(char **arg);
void for_env(void);
#endif
