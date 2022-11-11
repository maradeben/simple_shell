#include "main.h"

/**
 * count_command - count the number of commands
 * @command: command string
 * Return: the number of command arguments
*/
int count_commands(char *command)
{
	int number_of_words = 0;
	char *str_cpy, *word;

	if (command == NULL)
		return (-1);

	str_cpy = strdup(command);
	if (str_cpy == NULL)
		return (-1);

	/* count the number of arguments */
	word = strtok(str_cpy, " ");
	while (word != NULL)
	{
		if ((*word) == '\n')
		{
			word = strtok(NULL, " ");
			continue;
		}
		number_of_words += 1;
		word = strtok(NULL, " ");
	}
	
	return (number_of_words);
}

/**
 * parse_command - split command string into separate words
 * @command: the command
 * @argv: argument vector
 * Return: no return
 */
void parse_command(char *command, char **argv)
{
	char *str_cpy, *word;
	int i = 0;

	if (command == NULL)
		exit (98);

	str_cpy = strdup(command);
	if (str_cpy == NULL)
		exit (98);

	/* split arguments and store in array */
	word = strtok(str_cpy, " ");
	for (i = 0; word != NULL; i++)
	{
		if ((*word) == '\n')
		{
			word = strtok(NULL, " ");
			continue;
		}
		argv[i] = malloc(sizeof(char) * (strlen(word) + 1));
		strcpy(argv[i], word);
		word = strtok(NULL, " ");
	}

	free(str_cpy);
}