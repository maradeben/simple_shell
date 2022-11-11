#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* function prototypes */
char *get_command();
int count_commands(char *command);
void parse_command(char *command, char **argv);

#endif /* _MAIN_H_ */