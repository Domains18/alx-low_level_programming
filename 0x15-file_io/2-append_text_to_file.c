//Header file inclusion
#include "main.h"

/**
 * Function: appendTextToFile
 * --------------------------
 * Appends text at the end of a file.
 *
 * @param filename: Pointer to the name of the file.
 * @param text_content: The string to add to the end of the file.
 *
 * @return: -1 if function fails or filename is NULL.
 *          -1 if the file does not exist and the user lacks write permissions.
 *           1 otherwise.
 */
int appendTextToFile(const char *filename, char *text_content) {
    // File descriptor, write count and length initialization
    int fd, wrCount, len = 0;

    // Check if the filename is NULL
    if (filename == NULL) {
        return -1;
    }

    // Calculate the length of the text to append
    if (text_content != NULL) {
        while (text_content[len]) {
            len++;
        }
    }

    // Open the file with write only and append mode
    fd = open(filename, O_WRONLY | O_APPEND);

    // Check if file opening failed
    if (fd == -1) {
        return -1;
    }

    // Write the text to the file
    wrCount = write(fd, text_content, len);

    // Check if the write operation failed
    if (wrCount == -1) {
        close(fd);
        return -1;
    }

    // Close the file and return 1
    close(fd);
    return 1;
}

