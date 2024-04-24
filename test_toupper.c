#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char c;

	printf("\nTEST ft_toupper()\n");
	c = 'm';
    printf("ER:%c -> %c", c, toupper(c));
    printf("\nAR:%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\nER:%c -> %c", c, toupper(c));
    printf("\nAR:%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\nER:%c -> %c", c, toupper(c));
    printf("\nAR:%c -> %c", c, ft_toupper(c));
    return 0;
}
