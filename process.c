#include "main.h"
/**
 * create_process - function that creates
 * a process and executes a command.
 *
 * @argv_buffer: buffer that save arguments.
 *
 * Return: void.
 */
void create_process(char *argv_buffer[])
{
	int id;

	id = fork();

	if (id == -1)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (id == 0)
	{
		execve(argv_buffer[0], argv_buffer, NULL);
		perror(argv_buffer[0]);
		exit(EXIT_FAILURE);
	}
	else
		wait(NULL);
}
