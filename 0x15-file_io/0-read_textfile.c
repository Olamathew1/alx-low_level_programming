#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- To read text file and  print to STDOUT as required.
 * @filename: contained the text file that was  red
 * @letters: the total amount of letters to be red
 * Return: w- the actual actual value of bytes red and printed
 *        0 when action fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;

	ssize_t fd;

	ssize_t w;

	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
