#include "libft.h"
#include <stdio.h>

int main() {
    // Test cases
    char *input = "Hello, World!";
    
    printf("\nTEST ft_substr()\n");
	// Test 1: Start index is 0, len is 5
    char *result1 = ft_substr(input, 0, 5);
    printf("Test 1 - ER: Hello\n");
	printf("AR: %s\n", result1);
    free(result1);
    
    // Test 2: Start index is 7, len is 6
    char *result2 = ft_substr(input, 7, 6);
	printf("Test 2 - ER: World!\n");
    printf("AR: %s\n", result2);
    free(result2);
    
    // Test 3: Start index is 12, len is 8
    char *result3 = ft_substr(input, 12, 8);
	printf("Test 3 - ER: !\n");
    printf("AR: %s\n", result3);
    free(result3);
    
    // Test 4: Start index is 20 (out of range)
    char *result4 = ft_substr(input, 20, 5);
	printf("Test 4 - ER: \n");
    printf("AR: %s\n", result4);
    free(result4);
    
    // Test 5: NULL input string
    char *result5 = ft_substr(NULL, 0, 5);
	printf("Test 5 - ER: (null)\n");
    printf("AR: %s\n", result5);
    free(result5);
    
    // Test 6: Substring in empty string
    char *input1 = "";
    char *result6 = ft_substr(input1, 0, 0);
	printf("Test 6 - ER: \n");
	printf("AR: %s\n", result6);
	free(result6);
    
	//Test 7
    char *input2 = "hola";
    char *result7 = ft_substr(input2, 0, -1);
	printf("Test 7 - ER: hola\n");
	printf("AR: %s\n", result7);
	free(result7);

	return (0);
}