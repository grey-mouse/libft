#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char *result;

	printf("\nTEST ft_strtrim.c\n");
    // Test 1: Trimming all characters
    result = ft_strtrim("hello", "hello");
	printf("Test 1:\nER: \n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

    // Test 2: Trimming some characters
	result = ft_strtrim("hello world", "hlo ");
	printf("Test 2:\nER: ello world\n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

    // Test 3: Trimming no characters
    result = ft_strtrim("hello world", "xyz");
	printf("Test 3:\nER: hello world\n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

    // Test 4: Empty string
    result = ft_strtrim("", "xyz");
	printf("Test 4:\nER: \n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

    // Test 5: Empty set
    result = ft_strtrim("hello world", "");
	printf("Test 5:\nER: hello world\n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

    // Test 6: Null string
    result = ft_strtrim(NULL, "xyz");
	printf("Test 6:\nER: NULL\n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

    // Test 7: Null set
    result = ft_strtrim("hello world", NULL);
	printf("Test 7:\nER: NULL\n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

	// Test 8
    result = ft_strtrim("lorem ipsum dolor sit amet", "tel");
	printf("Test 8:\nER: orem ipsum dolor sit am\n");
    printf("AR: %s\n", result ? result : "NULL");
    free(result);

    return (0);
}
