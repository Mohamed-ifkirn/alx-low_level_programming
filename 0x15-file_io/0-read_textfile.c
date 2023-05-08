#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads up to `letters` bytes from file `filename`
 *                and prints them to standard output.
 * @filename: A pointer to the name of the file to read.
 * @letters: The maximum number o to read.
 *
 * Return: The number to read and printed,
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readen_, written;
	char *buf;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
	close(fd);
	return (0);
	}

	readen_ = read(fd, buf, letters);
	if (readen_ == -1)
	{
	free(buf);
	close(fd);
	return (0);
	}

	written = fwrite(buf, sizeof(char), readen_, stdout);
	if (written != readen_)
	{
	free(buf);
	close(fd);
	return (0);
	}

	free(buf);
	close(fd);

	return (written);
}
