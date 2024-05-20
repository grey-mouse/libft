#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    char c;
    c = 'Q';
    printf("\nTEST ft_isapha\n");
	
	printf("\nER:Result when uppercase alphabet is passed: %d", isalpha(c));
    printf("\nAR:Result when uppercase alphabet is passed: %d", ft_isalpha(c));

    c = 'q';
    printf("\nER:Result when lowercase alphabet is passed: %d", isalpha(c));
	printf("\nAR:Result when uppercase alphabet is passed: %d", ft_isalpha(c));
    
	c='+';
    printf("\nER:Result when non-alphabetic character is passed: %d", isalpha(c));
	printf("\nAR:Result when uppercase alphabet is passed: %d", ft_isalpha(c));
    
	c=0;
	printf("\nER:Result when non-alphabetic character is passed: %d", isalpha(c));
	printf("\nAR:Result when uppercase alphabet is passed: %d", ft_isalpha(c));
	return 0;
}
