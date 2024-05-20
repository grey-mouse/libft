#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main()
{
    char c;

    printf("\nTEST ft_isprint()\n");
	c = 'Q';
    printf("ER:Result when a printable character %c is passed to isprint(): %d", c, isprint(c));
    printf("\nAR:Result when a printable character %c is passed to ft_isprint(): %d", c, ft_isprint(c));

    c = '\n';
    printf("\nER:Result when a control character %c is passed to isprint(): %d", c, isprint(c));
    printf("\nAR:Result when a control character %c is passed to ft_isprint(): %d", c, ft_isprint(c));

    return 0;
}
