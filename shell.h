#ifndef SHELL_H
#define SHELL_H

/*maros*/
#define MAX_INPUT_LENGTH 1024
#define MAXARGS 1000
#define COMMAND_SIZE 126
#define ERROR -1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>
#include <limits.h>

extern char **environ;
void execve_commandline(char *argv[]);
void check_process(char *argv[]);
void interactive_mode(void);
void check_non_interactive_mode(void);
void add_user_local_bin(char *argv[], char *arg);


/**
 * _strcpy - copies the string
 *
 * @src: pointer that contains the string
 * @dest: pointer that will has the copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)

{
	int k = 0;

	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/**
 * _strlen -  returns the length of a string
 *
 * @s: contains the string
 *
 * Return: the value we need
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#endif
