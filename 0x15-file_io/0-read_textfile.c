#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
* read_textfile - function that read and write into a file
*
* @filename: Name of file
* @letters: number of letter to be printed
* Return: 0 (success)
*/


size_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr_file;
	char *buffer;
	ssize_t read;
	ssize_t written;

	if (filename == NULL)
		return (0);

	ptr_file = fopen(filename, "r");
	if (ptr_file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(ptr_file);
		return (0);
	}

	read = fread(buffer, 1, letters, ptr_file);
	if (read <= 0)
	{
		free(buffer);
		fclose(ptr_file);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, read);
	if (written < 0 || written < read)
	{
		free(buffer);
		fclose(ptr_file);
		return (0);
	}

	free(buffer);
	fclose(ptr_file);
return (written);
}
