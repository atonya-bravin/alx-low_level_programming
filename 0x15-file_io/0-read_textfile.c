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
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: the name of the file we want to open
 * @letters: the number of characters we should read from the file
 *
 * Return: 0(fail) or number of letters it could read and print (success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int access_granted;
	char *character_holder = malloc(sizeof(char) * letters);
	ssize_t number_of_read_char;
	ssize_t number_of_written_char;

	if (filename == NULL)
		return (0);

	access_granted = open(filename, O_RDONLY);

	if (access_granted == -1)
		return (0);

	number_of_read_char = read(access_granted, character_holder, letters);

	if (number_of_read_char == -1)
		return (0);
	close(access_granted);
	access_granted = open("/dev/tty", O_WRONLY);
	number_of_written_char = write(access_granted, character_holder,
			_strlen(character_holder));

	if (number_of_written_char == -1)
		return (0);
	if (number_of_written_char < number_of_read_char)
		return (0);
	return (number_of_written_char);
}
