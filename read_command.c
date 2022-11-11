#include "main.h"

/**
 * get_command: display prompt and get command from the user
 *
 * Return: command input by user
 */
char *get_command()
{
	char *buffer = malloc(1204);
	size_t len = 1024;

	printf("#cisfun$ ");
	getline(&buffer, &len, stdin);

	return (buffer);
}