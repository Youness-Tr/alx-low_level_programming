#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - create a file with name filename
 * @filename: name of the file to create.
 * @text_content: file information to write
 *
 * Return: Always 1 on scucess, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int error, len, fdest;

	error = len = fdest = 0;
	if (!filename)
		return (-1);

	fdest = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fdest < 0)
			return (-1);
	while (text_content && text_content[len])
		len++;

	error = write(fdest, text_content, len);
	if (error < 0)
		return (-1);
	close(fdest);
	return (1);
}
