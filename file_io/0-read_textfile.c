#include <fcntl.h>   /** Includes definitions for file control operations */
#include <unistd.h>  /** Includes definitions for POSIX constants and types */
#include <stdio.h>   /** Includes definitions for standard I/O operations */
#include <stdlib.h> /** Includes definitions for mem management operations */

/**
 * read_textfile - Function that reads a text and print it
 * @filename: where to print
 * @letters: number of letters it should read and print
 *
 * Return: size char to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buffer;
	ssize_t bytes_to_read, bytes_written;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor < 0)
	{
		free(buffer);
		return (0);
	}

	bytes_to_read = read(fileDescriptor, buffer, sizeof((buffer)));
	if (bytes_to_read < 0)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_to_read);
	if (bytes_written < 0)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}

	close(fileDescriptor);
	free(buffer);

	return (bytes_written);
}
