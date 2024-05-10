#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sample function to print index and character
void print_index_char(unsigned int index, char *c) {
    printf("Index: %u, Character: %c\n", index, *c);
}

// Sample function to convert characters to uppercase
void test_uppercase(unsigned int index, char *c) {
    // Check if the character is a lowercase letter
    if (*c >= 'a' && *c <= 'z') {
        // Convert to uppercase
        *c = *c - 'a' + 'A';
        printf("Index: %u, Converted Character: %c\n", index, *c);
    } else {
        // If the character is not a lowercase letter, just print it without conversion
        printf("Index: %u, Character: %c\n", index, *c);
    }
}

int main() {
	// Test cases
    char test_string[] = "hello";
    printf("\nTEST ft_striteri()\n");
	
    // Test case 1: Print index and character of each element
    printf("Test case 1:\n");
    ft_striteri(test_string, &print_index_char);

    // Test case 2: Convert characters to uppercase
    printf("Test case 2:\nBefore conversion: %s\n", test_string);
    ft_striteri(test_string, test_uppercase);
    printf("After conversion: %s\n", test_string);

    return 0;
}
