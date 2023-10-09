#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - Function that returns the lenght of a string
 * @str : string to be evaluated
 * Return: lenght of the string
 */
int _strlen(char *str)
{
	int len;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
return (len);
}

/**
* create_file - Function that creates a file and file
* @filename: name of the file
* @text_content: content to be written
*
* Return: 1 (success)
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	size_t text_len;
	ssize_t written;

	text_len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(file, text_content, text_len);
		if (written == -1)
		{
			close(file);
			return (-1);
		}
	}
close(file);
return (1);
}
