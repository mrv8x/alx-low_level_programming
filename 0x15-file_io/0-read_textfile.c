#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: the number of letters printed, or 0 if it fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	int a, n;
	char *c;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);
	a = read(x, c, letters);
	if (a < 0)
	{
		free(c);
		return (0);
	}
	c[a] = '\0';
	close(x);
	n = write(STDOUT_FILENO, c, a);
	if (n < 0)
	{
		free(c);
		return (0);
	}
	free(c);
	return (n);
}
