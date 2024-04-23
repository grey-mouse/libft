#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    int c;
    int result;

	printf("\nTEST ft_isascii()\n");
    c = '5';
    result = isascii(c);
    printf("ER:When %d is passed, return value is %d\n", c, result);
    result = ft_isascii(c);
    printf("AR:When %d is passed, return value is %d\n", c, result);

    c = 'Q';
    result = isascii(c);
    printf("ER:When %d is passed, return value is %d\n", c, result);
    result = ft_isascii(c);
    printf("AR:When %d is passed, return value is %d\n", c, result);

    c = 'l';
    result = isascii(c);
    printf("ER:When %d is passed, return value is %d\n", c, result);
    result = ft_isascii(c);
    printf("AR:When %d is passed, return value is %d\n", c, result);

    c = '+';
    result = isascii(c);
    printf("ER:When %d is passed, return value is %d\n", c, result);
    result = ft_isascii(c);
    printf("AR;When %d is passed, return value is %d\n", c, result);

    c = -1;
    result = isascii(c);
    printf("ER:When %d is passed, return value is %d\n", c, result);
    result = ft_isascii(c);
    printf("AR:When %d is passed, return value is %d\n", c, result);	
    
    c = 128;
    result = isascii(c);
    printf("ER:When %d is passed, return value is %d\n", c, result);
    result = ft_isascii(c);
    printf("AR:When %d is passed, return value is %d\n", c, result);

	return 0;
}

