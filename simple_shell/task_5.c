#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *command_holder = NULL;
	size_t command_length = 0;
	char *command;
	char *command_path;
	char *true_command_path;
	char *argument_list;
	char *true_argument_list;
	char *path_list;
	int command_passer = 0;
	char *arg[5];
	int process_id;


	(void)argv;
	(void)path_list;

	if (argc != 1)
	{
		printf("Usage: %s <file>\n", argv[0]);
		exit (EXIT_FAILURE);
	}
	while(1)
	{
		argument_list = malloc(sizeof(char));
		command_path = malloc(sizeof(char));
		true_command_path = malloc(sizeof(char));
		true_argument_list = malloc(sizeof(char));
		path_list = malloc(sizeof(char));
		printf("$ ");
		getline(&command_holder, &command_length, stdin);

		command_holder = strtok(command_holder, " ");
		command = command_holder;
		if(command[0] == '.')
			command_path = command;
		else
		{
			command_path = strcat(command_path, "/bin/");
			command_path = strcat(command_path, command);
		}

		while(command_holder)
		{
			if (command_passer > 0)
			{
				strcat(argument_list, command_holder);
				strcat(argument_list, " ");
			}
			command_holder = strtok(NULL, " ");
			command_passer++;
		}	
		if((command_passer - 1) == 0)
		{
			strncpy(true_command_path, command_path, (strlen(command_path) - 1));		
			arg[0] = true_command_path;
			arg[1] = NULL;
			arg[2] = NULL;
		}
		else
		{
			strncpy(true_argument_list, argument_list, (strlen(argument_list) - 2));
			arg[0] = command_path;
			arg[1] = true_argument_list;
			arg[2] = NULL;
		}
		printf("command => %s", true_command_path);
		process_id = fork();
		if(process_id == 0)
		{
			if (execve(arg[0], arg, NULL) == -1)
			{
				perror("Error:");
			}
		}
		free(true_command_path);
		free(command_path);
		free(true_argument_list);
		free(argument_list);
		free(path_list);
	}
	return (0);
}
