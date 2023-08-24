#include "main.h"

/**
 * add_bin_prefix - function that adds full path to command.
 *
 * @argv: array of arguments.
 * @new_arg: full command.
 *
 * Return: void.
 */
void add_bin_prefix(char *argv[], char *new_arg)
{
	char *prefix_path = "/bin/";
	size_t prefix_len;
	size_t arg_len;

	if (argv[0] == NULL)
		return;

	prefix_len = strlen(prefix_path);
	arg_len = strlen(argv[0]);

	if (_strcmp(argv[0], prefix_path) == 0 || _strcmp(argv[0], "./") == 0
			|| _strcmp(argv[0], "../") == 0)
		return;

	strncpy(new_arg, prefix_path, prefix_len);
	strncpy(new_arg + prefix_len, argv[0], arg_len);
	new_arg[prefix_len + arg_len] = '\0';

	argv[0] = new_arg;
}

/**
 * _strcmp - compare the string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
