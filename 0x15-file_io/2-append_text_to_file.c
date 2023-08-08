#include "main.h"

/**
 * append_text_to_file - appends a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, n = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (!text_content)
		text_content = "";

	for (; text_content[n]; n++)
		;

	w = write(fp, text_content, n);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);

}
