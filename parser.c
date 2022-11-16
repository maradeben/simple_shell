#include "shell.h"

/**
 * parse_command - split command string into separate words
 * @command: the command
 * Return: pointer to pointer to strings
 */
char **parse_command(char *command)
{
	char *str_cpy, *str_cpy2, *word, **argv;
	int i = 0, num_args = 0;

	if (command == NULL)
		exit(98);
	str_cpy = _strdup(command); /* copy to count */
	str_cpy2 = _strdup(command); /* copy to split */
	if (str_cpy == NULL || str_cpy2 == NULL)
		return (NULL);
	/* count number of args */
	word = strtok(str_cpy, "\n ");
	while (word != NULL)
	{
		num_args += 1;
		word = strtok(NULL, "\n ");
	}

	argv = malloc(sizeof(char *) * num_args);
	if (!argv)
	{
		perror("hsh");
		return (NULL);
	}
	/* split arguments and store in array */
	word = strtok(str_cpy, "\n ");
	for (i = 0; word != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * (_strlen(word) + 1));
		strcpy(argv[i], word);
		word = strtok(NULL, "\n ");
	}
	argv[i] = NULL;
	free(str_cpy);

	return (argv);
}
