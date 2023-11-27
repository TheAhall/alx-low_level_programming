#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: the size of the letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t b_read, b_write;
	char buffer[READ_BUFFER_SIZE * 8];

	if (filename == NULL)
		return (0);
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	b_read = read(n, &buffer[0], letters);
	b_write = write(STDOUT_FILENO, &buffer[0], b_read);
	close(n);
	return (b_write);
}
