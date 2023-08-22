#include "shell.h"

/**
 * interactive_mode - checks if shell is interactive.
 *
 * Return: 0
 */
void interactive_mode(void)
{
	ssize_t bytes;
	size_t  input_length;
	char *token = NULL,  *input = NULL, **argv = NULL;
	char *command[MAXARGS];
	int num = 0, j = 0;

	while (1)

	{
		write(STDOUT_FILENO, "$ ", 1);
		bytes = getline(&input, &input_length, stdin);
		if (bytes == EOF)
			perror("Error input\n");
		free(input);
		return;
	}
}
