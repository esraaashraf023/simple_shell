#include "main.h"
/**
 * interactive_mode - function that handles
 * a command from interactive mode.
 *
 * @bytes: number of bytes from reading line.
 * @input_buffer: buffer that save input line.
 * @argv_buffer: buffer that save arguments.
 * @new_arg: full path command.
 *
 * Return: void.
 */
void interactive_mode(int bytes, char *input_buffer,
		char *argv_buffer[], char *new_arg)
{
	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		bytes = read(STDIN_FILENO, input_buffer, MAX_INPUT_LENGTH);

		if (bytes == -1)
		{
			perror("Error reading from stdin");
			continue;
		}
		else if (bytes == 0)
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
		if (input_buffer[bytes - 1] == '\n')
			input_buffer[bytes - 1] = '\0';
		string_token(input_buffer, " ", argv_buffer);
		if (argv_buffer[0] == NULL || *argv_buffer[0] == '\0'
				|| *argv_buffer[0] == ' ')
			continue;
		check_and_execute(argv_buffer, new_arg);
	}
}
