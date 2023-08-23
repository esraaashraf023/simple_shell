#include "shell.h"

/**
 * split_line - Split a line into tokens
 * @line: Pointer.
 *
 * Return: 0
 */

void split_line(char *line)
{
	char **argv;
	char *token_b;
	size_t b_s; /*Size of array */
	int q = 0;

	b_s = 1;
	argv = malloc(sizeof(char *)  *b_s);
	if (argv == NULL)
	{
		perror("error");
		exit(1);
	}

	token_b = strtok(line, DELIM);
	while (token_b != NULL)
	{
		argv[q] = token_b;
		q++;
		b_s++;
		argv = realloc(argv, sizeof(char *) *b_s);
		if (argv == NULL)
		{
			perror ("error Realloc");
			exit(1);
		}
		token_b = strtok(NULL, DELIM);
		argv[q] = NULL;
		free(argv);
	}
}
