#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int main()
{
    char c;
    int result;

	printf("\nTEST ft_isalnum()\n");
    c = '5';
    result = isalnum(c);
    printf("ER:When %c is passed, return value is %d\n", c, result);
    result = ft_isalnum(c);
    printf("AR:When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = isalnum(c);
    printf("ER:When %c is passed, return value is %d\n", c, result);
    result = ft_isalnum(c);
    printf("AR:When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("ER:When %c is passed, return value is %d\n", c, result);
    result = ft_isalnum(c);
    printf("AR:When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = isalnum(c);
    printf("ER:When %c is passed, return value is %d\n", c, result);
    result = ft_isalnum(c);
    printf("AR:When %c is passed, return value is %d\n", c, result);

    return 0;
}
