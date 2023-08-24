#include "main.h"

/**
 * non_interactive_mode - function that handles
 * a command from non interactive mode.
 *
 * @input_buffer: buffer that save input line.
 * @multi_command: array of commands.
 * @argv_buffer: buffer that save arguments.
 * @new_arg: full path command.
 *
 * Return: void.
 */
void non_interactive_mode(char *input_buffer, char *multi_command[],
		char *argv_buffer[], char *new_arg)
{
	int bytes, j = 0;
	char *command;

	bytes = read(STDIN_FILENO, input_buffer, MAX_INPUT_LENGTH);
	if (input_buffer[bytes - 1] == '\n')
		input_buffer[bytes - 1] = '\0';

	hundle_multi_command(input_buffer, multi_command);
	command = multi_command[0];
	while (command != NULL)
	{
		string_token(command, " ", argv_buffer);
		check_and_execute(argv_buffer, new_arg);
		command = multi_command[++j];
	}
}
