#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */



int create_file(const char *filename, char *text_content)
{
	int a, x, m = 0;

	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (a < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[m])
			m++;
		x = write(a, text_content, m);
		if (x != m)
			return (-1);
	}

	close(a);

	return (1);
}
