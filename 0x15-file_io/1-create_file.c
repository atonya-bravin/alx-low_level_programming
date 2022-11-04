#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * _strlen - returns length of a string
 *
 * Description: takes in a string and returns its length
 *
 * @s: the string pointer
 *
 * Return: Always string length
 *
 */

int _strlen(char *s)
{
	int character_counter = 0;

	while (s[character_counter] != '\0')
		character_counter++;
	return (character_counter);
}

/**
 * create_file - creates a file
 *
 * @filename: the name of the file to be created
 * @text_content: the content to write into the file
 *
 * Return: 1(success) -1(fail)
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t access_granted;

	if ((filename == NULL) | (text_content == NULL))
		return (-1);

	access_granted = open(filename, O_CREAT|O_RDWR|O_APPEND, 00600);

	if (access_granted == -1)
	{
		printf("i faild to create the file");
		return (-1);
	}

	access_granted = write(access_granted, text_content, _strlen(text_content));

	if (access_granted == -1)
		return (-1);

	return (1);
}
