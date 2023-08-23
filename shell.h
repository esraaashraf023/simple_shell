#ifndef SHELL_H
#define SHELL_H

/*maros*/
#define MAX_INPUT_LENGTH 1024
#define MAXARGS 1000
#define COMMAND_SIZE 126
#define ERROR -1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>
#include <limits.h>

extern char **environ;
void execve_commandline(char *argv[]);
void check_process(char *argv[]);
void interactive_mode(void);
void check_non_interactive_mode(void);
void add_user_local_bin(char *argv[], char *arg);

#endif
