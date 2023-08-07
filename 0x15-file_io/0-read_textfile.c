#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and print text to STDOUT
 * @filename: file to be read
 * @letters: number of lettters
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	ssize_t r;
	ssize_t w;
	char *buffer;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fp);
	return (w);
}


