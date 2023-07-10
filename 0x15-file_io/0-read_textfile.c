#include "main.h"

/**
 * read_textfile- read a file and print
 *
 * @filename: file name
 * @letters: num of lettters in file
 *
 * Return: return (0) if wrong
 *          w if true
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, r, w;
	char *buff;


	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	r = read(fp, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);

	close(fp);


	return (w);
}
