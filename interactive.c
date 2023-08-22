#includ "shell.h"

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
}
{
	if (token != NULL && token[0] == '\n' && bytes == 1)
	{
		free(token);
		free(input);
		return;
	}
	token = strtok(input, " ");
	while (token != NULL)
		command[num++] = token;
	token = strtok(NULL, " \n");
	command[num] = NULL;
	argv = (char **)malloc((num + 1) * sizeof(char *));
	if (argv == NULL)
	{
		perror("failed\n");
		free(input);
		return;
	}
	for (; j < num; j++)
		argv[j] = command[j];
	argv[num] = argv[j] = command[j];
	argv[num] = NULL;
	execve_commandline(argv);
	{
		free(argv);
		free(input);
	}
}