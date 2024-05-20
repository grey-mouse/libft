#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    char c;

	printf("\nTEST ft_isdigit()\n");
    c='5';
    printf("ER:Result when numeric character is passed: %d", isdigit(c));
    printf("\nAR:Result when numeric character is passed: %d", ft_isdigit(c));
    
	c='+';
    printf("\nER:Result when non-numeric character is passed: %d", isdigit(c));
    printf("\nAR:Result when non-numeric character is passed: %d", ft_isdigit(c));
    return 0;
}
