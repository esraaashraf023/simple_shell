#include "shell.h"

/**
 *  add_user_local_bin - add path to command.
 *
 * @argv: array of arguments.
 * @arg: full command.
 *
 * Return: void.
 */
void add_user_local_bin(char *argv[], char *arg)
{
	char *_path_ = "/user/local/bin/";
	size_t max_len;
	size_t arg_len;

	if (argv[0] == NULL)
		return;

	max_len = strlen(_path_);
	arg_len = strlen(argv[0]);

	if (strcmp(argv[0], _path_) == 0 || strcmp(argv[0], "./") == 0
			|| strcmp(argv[0], "../") == 0)
		return;

	strcpy(arg, _path_);
	strcpy(arg + max_len, argv[0]);
	arg[max_len + arg_len] = '\0';

	argv[0] = arg;
}
