#include "main.h"

/**
 * create_file - creates a file with the given name and writes the provided
 * text content to it.
 *
 * @filename: the name of the file to create.
 * @text_content: a pointer to a string-...
 *
 * Return: 1 on success, -1 on failure.
 **/
int create_file(const char *filename, char *text_content)
{
	int o, w, dem = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (dem = 0; text_content[dem]; dem++)
		;
}

o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, dem);

if (o == -1 || w == -1)
{
close(o);
return (-1);
}

close(o);

return (1);
}
