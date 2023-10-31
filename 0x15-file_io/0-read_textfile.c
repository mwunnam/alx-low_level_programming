#include "main.h"

/**
* read_textfile - Function that reads the text of a file
* @filename: Name of file who's content is to be read
* @letters: Number of charaters to be read
* Return: Returns the number of charactes read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	size_t byte_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	ptr = fopen(filename, "r");
	if (ptr == NULL)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		fclose(ptr);
		return (0);
	}

	byte_read = fread(buffer, 1, letters, ptr);

	if (byte_read > 0)
	{
		fwrite(buffer, 1, byte_read, stdout);
	}
fclose(ptr);
free(buffer);

return (byte_read);
}
