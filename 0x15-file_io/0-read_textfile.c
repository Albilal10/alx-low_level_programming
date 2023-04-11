#include "main.h"
#include <stdlib.h>


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fdes;
	ssize_t writ;
	ssize_t t;

	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fdes, buf, letters);
	writ = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fdes);
	return (writ);
