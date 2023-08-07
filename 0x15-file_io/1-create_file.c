#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: 1 and -1 if the function fails
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i, w;
	int len = 0;
	
	if (filename == NULL)
	{
		return (-1);
	}
	
	if (text_content == NULL)
		return (-1);
	else
		for (i = 0; text_content[i] != '\0'; i++)
		{
			len++;
		}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);
	if (fp == -1 || w == -1)
	{
		return (-1);
	}
	close (fp);
	return (1);
}
