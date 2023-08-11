#include "main.h"
/**
 * create_file: Create a function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string
 * to write to the file.
 * Return: if the function success return 1
 * if it faliuer return -1
 */
int create_file(const char *filename, char *text_content)
{
	int writes, length = 0, file;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writes = write(file, text_content, length);
	if (file == -1 || writes == -1)
		return (-1);
	close(file);
	return (1);
}
