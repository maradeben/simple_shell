#include <stdio.h>
#include <stdlib.h>

/**
 * get_command - receive input command
 * Return: the command
*/
char *get_command(void)
{
	char *buffer = malloc(1204);
	size_t len  = 1024;

	getline(&buffer, &len, stdin);
	return (buffer);
}
