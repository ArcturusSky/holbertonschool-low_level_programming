#include <fcntl.h> /** Includes definitions for file control operations */
#include <unistd.h> /** Includes definitions for POSIX constants and types */
#include <stdlib.h> /** Includes definitions for mem management operations */
#include "main.h"

/**
 * _strlen - Function to count a string length
 * @s: string to count
 * Return: lengh
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')

		/**
		* Allows to traverse the array to which point s
		* "*s" literally designates this array I do not need
		* its memory address with p = &s or other.
		*/
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * append_text_to_file - Function that append text at the end of a file
 * @filename: name of the file to be created
 * @text_content: text to write into the file.
 *
 * Return: 1 if success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t SizeOfText = 0;
	ssize_t NewText = 0;
	ssize_t BytesWritten = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file_d < 0)
		return (0);

	if (text_content != NULL)
	{
		SizeOfText = _strlen(text_content);
		while (NewText < SizeOfText)
		{
			BytesWritten = write(file_d, text_content + NewText, SizeOfText - NewText);
			if (BytesWritten < 0)
			{
				close(file_d);
				return (0);
			}
			NewText += BytesWritten;
		}
	}
	else
	{
		/** If text_content is NULL, create an empty file */
		if (write(file_d, "", 0) < 0)
		{
			close(file_d);
			return (1);
		}
	}
	if (NewText != SizeOfText)
		return (-1);

	close(file_d);
	return (1);
}
