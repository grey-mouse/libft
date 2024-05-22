#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main() {
	printf("\nTEST ft_split()\n");
    // Test case 1: Empty string
    char **result = ft_split("", ' ');
    if (result[0] != NULL) {
        printf("Test case 1 failed: Expected NULL, got [%p]\n", result[0]);
    } else {
        printf("Test case 1 passed\n");
        free(result);
    }

    // Test case 2: String with no delimiters
    result = ft_split("HelloWorld", ' ');
    if (strcmp(result[0], "HelloWorld")!= 0 || result[1] != NULL) {
        printf("Test case 2 failed: Expected ['HelloWorld', NULL], got [%s, %p]\n", result[0], result[1]);
    } else {
        printf("Test case 2 passed\n");
        free(result);
    }

    // Test case 3: String with multiple delimiters
    result = ft_split("Hello World How are you?", ' ');
    if (strcmp(result[0], "Hello")!= 0 || strcmp(result[1], "World")!= 0 || strcmp(result[2], "How")!= 0 || strcmp(result[3], "are")!= 0 || strcmp(result[4], "you?")!= 0 || result[5] != NULL) {
        printf("Test case 3 failed: Expected [['Hello', 'World', 'How', 'are', 'you?', NULL], got [%s, %s, %s, %s, %s, %p]\n", result[0], result[1], result[2], result[3], result[4], result[5]);
    } else {
        printf("Test case 3 passed\n");
        free(result);
    }

    // Test case 4: String with special characters
    result = ft_split("Hello, World! How are you?", '!');
    if (strcmp(result[0], "Hello, World")!= 0 || strcmp(result[1], " How are you?")!= 0 || result[2] != NULL) {
        printf("Test case 4 failed: Expected [['Hello, World', 'How are you?', NULL], got [%s, %s, %p]\n", result[0], result[1], result[2]);
    } else {
        printf("Test case 4 passed\n");
        free(result);
    }

    // Test case 5: Allocation failure
    result = ft_split("Hello, World!", '!');
    if (strcmp(result[0], "Hello, World")!= 0 || result[1] != NULL) {
        printf("Test case 5 failed: Expected [['Hello, World'], NULL], got [%s,%p]\n", result[0], result[1]);
    } else {
        printf("Test case 5 passed\n");
    }

    return 0;
}