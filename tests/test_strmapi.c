#include "../libft.h"
#include <stdio.h>
#include <string.h>

// Sample mapping function
char map_func(unsigned int index, char c) {
    // Simply increment the ASCII value of each character
    return c + index;
}

int main() {
    printf("\nTEST ft_strmapi()\n");
	// Test cases
    char *test_string = "Hello, World!";
    printf("Original string: %s\n", test_string);
    
    // Test case 1: Applying map_func to each character
    char *result;
	result = ft_strmapi(test_string, &map_func);
    printf("Mapped string: %s\n", result);
    free(result); // Free allocated memory

    return 0;
}
