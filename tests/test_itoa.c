#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    // Test cases
    printf("\nTEST ft_itoa()\n");
	int test_cases[] = {0, 123, -9, 2147483647, -2147483648};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++) {
        char *result = ft_itoa(test_cases[i]);
        printf("Integer: %d, String: %s\n", test_cases[i], result);
        free(result); // Remember to free the allocated memory
    }

    return 0;
}