#include <fcntl.h> /** Includes definitions for file control operations */
#include <unistd.h> /** Includes definitions for POSIX constants and types */
#include <stdlib.h> /** Includes definitions for mem management operations */
#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: name of the file to be created
 * @text_content: text to write into the file.
 *
 * Return: 1 if success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int FileDescriptor;
	int Newtext;

	CHECK_NULL(filename);

	FileDescriptor = open(*filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (FileDescriptor == 0)
		return (0);

	if (text_content != NULL)
		Newtext == write(filename, text_content, sizeof(text_content));

	if (Newtext == 0)
		return (-1);


	close(FileDescriptor);
	return (Newtext);
}
