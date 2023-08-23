#include "shell.h"

/**
 * main - program that  Write a simple UNIX command interpreter.
 *
 * Return: 0.
 */
int main(void)
{
	

	if (isatty(STDIN_FILENO) == 1)
	{
		interactive_mode();
	}
	else
		check_non_interactive_mode();

	return (0);
}
