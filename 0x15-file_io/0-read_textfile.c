#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL) {
		fprintf(stderr, "Error: Filename is NULL\n");
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) {
		fprintf(stderr, "Error: Failed to allocate memory for buffer\n");
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1) {
		fprintf(stderr, "Error: Failed to open file\n");
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1) {
		fprintf(stderr, "Error: Failed to read file\n");
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) {
		fprintf(stderr, "Error: Failed to write to stdout\n");
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (bytes_written);
}
