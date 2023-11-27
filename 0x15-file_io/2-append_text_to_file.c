#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a filee
 * @filename: filename
 * @text_content: text content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int  n;
	ssize_t b = 0, l = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);
	while (text_content[l] != '\0')
		l++;
	n = open(filename, O_WRONLY | O_APPEND);
	if (n == -1)
		return (-1);
	if (l != 0)
		b = write(n, text_content, l);
	close(n);
	return (b == l ? 1 : -1);
}
