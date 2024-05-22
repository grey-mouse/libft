#include <stdio.h>
#include <unistd.h>
#include "../libft.h"

// Function declaration
void ft_putstr_fd(char *s, int fd);

int main() {
    // Test cases
    //char *test_string = "Hello, World!";
	char *test_string = "lorem ipsum do\0lor sit amet";
	printf("\nTEST ft_putstr_fd()\n");
    
    // Test case 1: Output the string to standard output
    printf("Test case 1: Outputting string '%s' to stdout\n", test_string);
    ft_putstr_fd(test_string, STDOUT_FILENO);

    // Test case 2: Output the string to standard error
    printf("\nTest case 2: Outputting string '%s' to stderr\n", test_string);
    ft_putstr_fd(test_string, STDERR_FILENO);

    // Test case 3: Output the string to a file
    printf("\nTest case 3: Outputting string '%s' to a file (output_putstr.txt)\n", test_string);
    FILE *file = fopen("output_putstr.txt", "w");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }
    ft_putstr_fd(test_string, fileno(file));
    fclose(file);

    return 0;
}
