#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("\nTEST ft_strjoin()\n");
	char *result;

    // Test 1: Both strings empty
    result = ft_strjoin("", "");
	printf("Test 1:\nER:");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 2: First string empty, second string non-empty
    result = ft_strjoin("", "world");
	printf("Test 2:\nER: world");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 3: First string non-empty, second string empty
    result = ft_strjoin("hello", "");
	printf("Test 3:\nER: hello");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 4: Both strings non-empty
    result = ft_strjoin("hello", " world");
	printf("Test 4:\nER: hello world");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 5: First string longer than second
    result = ft_strjoin("hello world", "!");
	printf("Test 5:\nER: hello world!");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 6: Second string longer than first
    result = ft_strjoin("hello", " world!");
	printf("Test 6:\nER: hello world!");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 7: Both strings very long
    result = ft_strjoin("This is a very long string that will test the function's ability to handle large inputs.", " And this is another very long string that will test the function's ability to handle large inputs as well.");
    printf("Test 7:\nER: This is a very long string that will test the function's ability to handle large inputs. And this is another very long string that will test the function's ability to handle large inputs as well.");
	printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 9: Null pointers
    result = ft_strjoin(NULL, "world");
	printf("Test 9:\nER: NULL");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    result = ft_strjoin("hello", NULL);
	printf("Test 9:\nER: NULL");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    // Test 10: Special characters
    result = ft_strjoin("hello\n", "world\t|");
	printf("Test 10:\nER: hello\nworld\t|");
    printf("\nAR: %s\n", result ? result : "NULL");
    free(result);

    return (0);
}