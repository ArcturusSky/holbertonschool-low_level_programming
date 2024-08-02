#include <fcntl.h>   /** Includes definitions for file control operations */
#include <unistd.h>  /** Includes definitions for POSIX constants and types */
#include <stdlib.h>  /** Includes definitions for mem management operations */

/**
 * read_textfile - Function that reads a text file and prints it
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buffer;
	ssize_t bytes_read, bytes_written, tot_w;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(letters); /** Allocate buffer to hold the content */
	if (buffer == NULL)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);	/** Open the file */
	if (fileDescriptor < 0)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(fileDescriptor, buffer, letters);	/** Read from the file */
	if (bytes_read < 0)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}
	tot_w = 0; /** Write to the standard output */
	while (tot_w < bytes_read)
	{
		bytes_written = write(STDOUT_FILENO, buffer + tot_w, bytes_read - tot_w);
		if (bytes_written < 0)
		{
			close(fileDescriptor);
			free(buffer);
			return (0);
		}
		tot_w += bytes_written;
	}

	/**Clean up */
	close(fileDescriptor);
	free(buffer);

	return (tot_w);
}
