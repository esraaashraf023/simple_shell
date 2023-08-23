#include "shell.h"

/**
 * execve_commandline - executable file
 * @argv: array
 *
 * Return: void.
 */
void execve_commandline(char *argv[])
{

	pid_t pid = fork();

	if (pid < 0)
	{
		perror("fork failed \n");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(argv[0], argv, NULL);
		perror(argv[0]);
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
