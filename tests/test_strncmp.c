#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1, *s2, *s3, *s4, *s5, *s6, *s7, *s8, *s9, *s10;

	printf("\nTEST ft_strncmp()\n");
	s1 = "hello";
	s2 = "hello world";
	printf("ER:res=%i\n", strncmp(s1, s2, 8));
	printf("AR:res=%i\n", ft_strncmp(s1, s2, 8));
	s3 = "word";
	s4 = "hello";
	printf("ER:res=%i\n", strncmp(s3, s4, 3));
	printf("AR:res=%i\n", ft_strncmp(s3, s4, 3));
	s5 = "hello";
	s6 = "hello";
	printf("ER:res=%i\n", strncmp(s5, s6, 6));
	printf("AR:res=%i\n", ft_strncmp(s5, s6, 6));
	s7 = "helaao";
 	s8 = "helloo";
 	printf("ER:res=%i\n", strncmp(s7, s8, 3));
	printf("AR:res=%i\n", ft_strncmp(s7, s8, 3));
	s9 = "abcdef";
	s10 = "abc\375xx";
	printf("ER:res=%i\n", strncmp(s9, s10, 5));
	printf("AR:res=%i\n", ft_strncmp(s9, s10, 5));
	return (0);
}
