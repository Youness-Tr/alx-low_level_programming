#include "main.h"

/**
 * read_textfile - read text file
 * @filename : body of text to print.
 * @letters :  max char to print.
 *Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdest;
	ssize_t read, writ;
	char *buffer;

	if (!filename)
		return (0);

	fdest = open(filename, O_RDONLY);

	if (fdest == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	read = read(fdest, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, read);

	close(fdest);

	free(buffer);

	return (writ);
}
