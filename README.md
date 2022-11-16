# Simple Shell

## An implementation of a simple shell in **C**

Project in Sprint 1 of the ALX Software Engineering Program

### Summary of Files in Repo and what they do

<ol>
  <li><b>_perror.c</b>: handles to printing of error messages</li>
  <li><b>built_in_funcs.c</b>: handles execution of built in functions
    <ul>
			<li>`exit_bul`: exit program</li>
			<li>`change_dir`: change directory</li>
			<li>`dis_env`: display the working environment</li>
			<li>`display_help`: show help text</li>
			<li>`echo_bul`: echo cases</li>
    </ul>
  </li>
  <li><b>built_in_funcs2.c</b>: spillover of functions from above
		<ul>
			<li>`history_dis`: save history of input commands into a file</li>
			<li>`print_echo`: execute normal echo
		</ul>
	</li>
	<li><em>cd</em>: manual for the cd command (change directory)</li>
	<li><b>display_prompt.c</b>: display prompt for user command input
		<ul>
			<li>`prompt`: display the **$** shell prompt</li>
			<li>`print_error`: show error with command</li>
		</ul>
	</li>
	<li><em>echo</em>: manual for the echo command</li>
	<li><b>executor_files.c</b>: execution functions involving file handling
		<ul>
			<li>`read_file`: read command from file, line by line</li>
			<li>`treat_file`</li>
			<li>`exit_bul_for_file`</li>
		</ul>
	</li>
	<li><b>executor.c</b>: execute commands
		<ul>
			<li>`handle_builtin`: handle builtin commands</li>
			<li>`check_cmd`: does the fork, wait and exec</li>
			<li>`signal_to_handle`</li>
		</ul>
	</li>
	<li><em>exit</em>: manual for exit command</li>
	<li><em>help</em>: manual for help command</li>
	<li><b>helpers_1.c</b>: helper functions for string handling, functions are analogs of definitions in the standard library
		<ul>
			<li>`_putchar`</li>
			<li>`_strncpy`</li>
			<li>`_strlen`</li>
			<li>`_atoi`</li>
			<li>`_puts`</li>
		</ul>
	</li>
	<li><b>helpers_2.c</b>: spillover from above
		<ul>
			<li>`_strcmp`</li>
			<li>`_isalpha`</li>
			<li>`_itoa`</li>
			<li>`array_rev`: reverse an array</li>
			<li>`numlen`: get length of a number</li>
		</ul>
	</li>
	<li><b>helpers_3.c</b>: spillover from above
		<ul>
			<li>`_strcpy`</li>
			<li>`_strcat`</li>
			<li>`_strchr`</li>
			<li>`_strncmp`</li>
			<li>`_strdup`</li>
		</ul>
	</li>
	<li><b>history.c</b>: functions to handle tracking of command history
		<ul>
			<li>`history`: get history and write into the file `.command_history'</li>
			<li>`free_env`: free environment variable array</li>
		</ul>
	</li>
	<li><b>input_command.c</b>: take user command input
		<ul>
			<li>`get_command`: function to get the command</li>
		</ul>
	</li>
	<li><em>man_1_simple_shell</em>: manual for use of the simple shell</li>
	<li><b>shell_main.c</b>: starting point of shell
		<ul>
			<li>`main`: the main function</li>
			<li>`check_builtin`: check for builtin commands with array of structs</li>
			<li>`creat_envi`: create the enviromment</li>
		</ul>
	</li>
	<li><b>shell.h</b>: the header file, contains:
		<ul>
			<li>function prototypes</li>
			<li>MACRO definitions</li>
			<li>struct defintion</li>
			<li>inclusion of all used libraries</li>
		</ul>
	</li>
</ol>