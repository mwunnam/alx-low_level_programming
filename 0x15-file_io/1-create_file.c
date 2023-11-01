#include "main.h"

/*
* create_file - Function that creates a file
* @filename: name of the file to be created
* @text_context: content of the file
*
* Return: Return 1 on success
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (access(filename, F_OK) != -1)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
			{
				return (-1);
			}
	}
	else
	{
		fd = open(filename, O_CREAT | O_RDWR, S_IWUSR | S_IRUSR);
			if (fd == -1)
			return (-1);
	}

	byte_written = write(fd, text_content,(size_t)_strlen(text_content));
	if (byte_written == -1)
	{
		close(fd);
		return (-1);
	}
close(fd);
return (1);
}

/**
 * _strlen - Function that calculate the lenght of a string
 * @s: String to be evaluated;
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
return (len);
}

