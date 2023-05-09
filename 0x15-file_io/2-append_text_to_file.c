#include "main.h"

/**
* append_text_to_file - append files
* @filename: first arg param
* @text_content: seond arg
* Return: value
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int data_file, new_line, dem = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dem = 0; text_content[dem];)
			dem++;
	}

	data_file = open(filename, O_WRONLY | O_APPEND);
	new_line = write(data_file, text_content, dem);

	if (data_file == -1 || new_line == -1)
		return (-1);

	close(data_file);

	return (1);
}
