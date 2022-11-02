#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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

	if (filename == NULL)
		return (0);
	
	access_granted = open(filename, O_RDONLY, letters);

	if (access_granted == -1)
		return (0);

	number_of_read_char = read(access_granted, character_holder, letters);

	if (number_of_read_char == -1)
		return (0);

	printf("%s", character_holder);
	return (number_of_read_char);
}
