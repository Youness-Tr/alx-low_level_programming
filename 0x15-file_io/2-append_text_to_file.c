#include "main.h"
/**
  * append_text_to_file - Appends text at the end of a file.
  * @filename: Name of file to write into
  * @text_content: text to append to file
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdest, status, a;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fdest = open(filename, O_APPEND | O_WRONLY);
	if (fdest == -1)
		return (-1);

	for (a = 0; text_content[a] != '\0'; i++)
		;
	status = write(fdest, text_content, a);
	if (status == -1)
		return (-1);

	close(fdest);
	return (1);
}
