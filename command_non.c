#include "shell.h"

/**
 * check_non_interactive_mode - checks if shell is non-interactive.
 * Return: 0.
 */
void check_non_interactive_mode(void)
{
	ssize_t bytes;
	size_t input_length;
	int q = 0;
	char *input = NULL;
	char *command[100];
	char *argv[100];

	bytes = getline(&input, &input_length, stdin);
	if (input[bytes - 1] == '\n')
	{
		perror("Error reading input\n");
		free(input);
		return;
	}
	if (input[bytes - 1] == '\n')
	{
		input[bytes - 1] = '\0';
	}
	command[0] = strtok(input, " ");
	while (command[q] != NULL)
	{
		argv[0] = strtok(command[q], " ");
		execve_commandline(argv);
		q++;
		command[q] = strtok(NULL, " ");
	}
	free(input);
}
