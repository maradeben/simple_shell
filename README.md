# Simple Shell

## An implementation of a simple shell in **C**

Project in Sprint 1 of the ALX Software Engineering Program

### Summary of Files in Repo and what they do

<ol>
  <li>_perror.c: handles to printing of error messages</li>
  <li>built_in_funcs.c: handles execution of built in functions
    <ul>
			<li>exit_bul: exit program</li>
			<li>change_dir: change directory</li>
			<li>dis_env: display the working environment</li>
			<li>display_help: show help text</li>
			<li>echo_bul: echo cases</li>
    <ul>
  </li>
  <li>built_in_funcs2.c: spillover of functions from above
		<ul>
			<li>history_dis: save history of input commands into a file</li>
			<li>print_echo: execute normal echo
		</ul>
	</li>
	<li>cd: manual for the cd command (change directory)</li>
	<li>display_prompt: display prompt for user command input
		<ul>
			<li>prompt: display the **$** shell prompt</li>
			<li>print_error: show error with command</li>
		</ul>
	</li>
</ol>