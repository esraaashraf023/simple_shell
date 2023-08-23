#includ "shell.h"

/**
 * split_command - helper function to split a string into tokens.
 *
 * @str: input string.
 * @delimiter: delimiter.
 *
 * Return: array of tokens.
 */
char **split_command(char *str, char *delimiter)
{
	char *new_token;
	char old_tokens = (char *)malloc(MAXARGS * sizeof(char *));
	int j = 0;

	if (old_tokens == NULL)
	{
		perror("error");
		exit(EXIT_FAILURE);
	}

	new_token = strtok(str, delimiter);
	while (new_token != NULL)
	{
		old_tokens[j] = (char *)malloc(strlen(new_token) + 1);
		if (old_tokens[] == NULL)
		{
			perror("error");
			exit(EXIT_FAILURE);
		}
		strcpy(old_tokens[j], new_token);
		j++;
		new_token = strtok(NULL, delimiter);
	}
	old_tokens[j] = NULL;

	return (old_tokens);
}
