#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main() {
    char c, result;

    printf("\nTEST ft_tolower()\n");
    c = 'M';
    result = tolower(c);
    printf("ER:tolower(%c) = %c\n", c, result);
	result = ft_tolower(c);
    printf("AR:ft_tolower(%c) = %c\n", c, result);
	
	c = 'm';
    result = tolower(c);
    printf("ER:tolower(%c) = %c\n", c, result);
	result = ft_tolower(c);
    printf("AR:ft_tolower(%c) = %c\n", c, result);

    c = '+';
    result = tolower(c);
    printf("ER:tolower(%c) = %c\n", c, result);
	result = ft_tolower(c);
    printf("AR:ft_tolower(%c) = %c\n", c, result);

	return 0;
}
