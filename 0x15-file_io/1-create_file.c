#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: text content
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int  n;
	ssize_t b = 0, l = 0;

	if (filename == NULL)
		return (-1);
	n = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (n == -1)
		return (-1);
	while (text_content[l] != '\0')
		l++;
	if (l != 0)
		b = write(n, text_content, l);
	close(n);
	if (b == l)
		return (-1);
	else
		return (1);
}
