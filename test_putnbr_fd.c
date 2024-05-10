#include <stdio.h>
#include "libft.h"

int main() {
    // Test cases
	printf("\nTEST ft_putnbr_fd()\n");
    //int test_integer = 12345;
	int test_integer = -2147483648;
    
    // Test case 1: Output the integer to standard output
    printf("Test case 1: Outputting integer '%d' to stdout\n", test_integer);
    ft_putnbr_fd(test_integer, STDOUT_FILENO);
    //write(STDOUT_FILENO, "\n", 1); // Adding a newline for better visualization

    // Test case 2: Output the integer to standard error
    printf("\nTest case 2: Outputting integer '%d' to stderr\n", test_integer);
    ft_putnbr_fd(test_integer, STDERR_FILENO);
    //write(STDERR_FILENO, "\n", 1); // Adding a newline for better visualization

    // Test case 3: Output the integer to a file
    printf("\nTest case 3: Outputting integer '%d' to a file (output.txt)\n", test_integer);
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }
    ft_putnbr_fd(test_integer, fileno(file));
    fclose(file);

    return 0;
}
