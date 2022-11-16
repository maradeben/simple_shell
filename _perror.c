#include "shell.h"
/**
 *  _prerror - error printer
 * @argv: program name
 * @c: num of errors
 * @cmd: error command
 * Return: void returns none
 */
void _prerror(char **argv, int c, char **cmd)
{
	char *er = _itoa(c);

	PRINTER(argv[0]);
	PRINTER(": ");
	PRINTER(er);
	PRINTER(": ");
	PRINTER(cmd[0]);
	PRINTER(": Illegal number: ");
	PRINTER(cmd[1]);
	PRINTER("\n");
	free(er);
}
