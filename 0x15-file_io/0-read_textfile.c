#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the name of the file.
 * @letters: the input to the file.
 * Return: 1 in success or 0 in fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t r;
	ssize_t w;
	ssize_t f;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	r = read(f, file, letters);
	w = write(STDOUT_FILENO, file, r);

	free(file);
	close(f);
	return (w);
}
