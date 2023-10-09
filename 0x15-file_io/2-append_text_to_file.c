#include <stdio.h>
#include "main.h"

/**
* append_text_to_file - Entry point
*
* @filename: Name of the file
* @text_content: content to be appended
*
* Return: 1 (success)
*/


int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int result;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");
	if (file == NULL)
	{
		fclose(file);
		return (-1);
	}

	result = fputs(text_content, file);
	if (result == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
return (1);
}
