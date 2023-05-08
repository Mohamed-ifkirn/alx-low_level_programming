#include "main.h"

/**
 * create_file - creates a file with the given name and writes the provided
 * text content to it.
 *
 * @filename: -...
 * @text_content: a pointer to a string ...
 *
 * Return: 1 on success, -1 on failure.
 **/
int create_file(const char *filename, char *text_content)
{
int new_text, file_data;
size_t len;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (len = 0; text_content[len]; len++)
		;
}
new_text = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
file_data = write(new_text, text_content, len);

if (new_text == -1 || file_data == -1)
{
close(new_text);
return (-1);
	}

close(new_text);

return (1);
}
