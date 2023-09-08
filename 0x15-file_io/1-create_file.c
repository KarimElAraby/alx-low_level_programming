#include "main.h"

/**
 * _strlen - return length of string
 * @s: the string
 *
 * Return: integer length
 */
int _strlen(char *s)
{
int i = 0;

if (!s)
	return (0);

while (*s++)
	i++;
return (i);
}

/**
 * create_file - creat a file
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 on success 0 on fail
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes = 0;
ssize_t len = _strlen(text_content);

if (!filename)
	return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
	return (-1);
if (len)
	bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
