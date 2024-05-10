#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    // Test cases
	printf("\nTEST ft_putendl_fd()\n");
    char *test_string = "Hello, World!";
    
    // Test case 1: Output the string followed by a newline to standard output
    printf("Test case 1: Outputting string '%s' followed by a newline to stdout\n", test_string);
    ft_putendl_fd(test_string, STDOUT_FILENO);

    // Test case 2: Output the string followed by a newline to standard error
    printf("\nTest case 2: Outputting string '%s' followed by a newline to stderr\n", test_string);
    ft_putendl_fd(test_string, STDERR_FILENO);

    // Test case 3: Output the string followed by a newline to a file
    printf("\nTest case 3: Outputting string '%s' followed by a newline to a file (output.txt)\n", test_string);
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }
    ft_putendl_fd(test_string, fileno(file));
    fclose(file);

    return 0;
}
