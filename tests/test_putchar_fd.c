#include <stdio.h>
#include <unistd.h> 
#include "../libft.h"

int main() {
    // Test cases
	printf("\nTEST ft_putchar_fd()\n");
    char test_char = 'A'; // Character to output
    int test_fd = STDOUT_FILENO; // File descriptor for standard output (stdout)

    // Test case 1: Output the character to stdout
    printf("Test case 1: Outputting character '%c' to stdout\n", test_char);
    ft_putchar_fd(test_char, test_fd);

    // Test case 2: Output the character to a file
    // Open a file in write mode (create if not exist, truncate existing content)
    FILE *file = fopen("output_putchar.txt", "w");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    // Set the file descriptor to the file's descriptor
    int file_fd = fileno(file);
    if (file_fd == -1) {
        perror("Failed to get file descriptor");
        fclose(file);
        return 1;
    }

    // Output the character to the file
    printf("\nTest case 2: Outputting character '%c' to a file (output_putchar.txt)\n", test_char);
    ft_putchar_fd(test_char, file_fd);

    // Close the file
    fclose(file);

    return 0;
}