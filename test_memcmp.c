#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
	char str1[15];
	char str2[15];

	printf("\nTEST ft_memcmp()\n");
	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	printf("ER:%d\n", memcmp(str1, str2, 5));
	printf("AR:%d\n", ft_memcmp(str1, str2, 5));

	strcpy(str1, "abcdef");
	strcpy(str2, "abcdef");
	printf("ER:%d\n", memcmp(str1, str2, 5));
	printf("AR:%d\n", ft_memcmp(str1, str2, 5));

	strcpy(str1, "");
	strcpy(str2, "");
	printf("ER:%d\n", memcmp(str1, str2, 5));
	printf("AR:%d\n", ft_memcmp(str1, str2, 5));

	strcpy(str1, "abcdef");
	strcpy(str2, "abc\xfdxx");
	printf("ER:%d\n", memcmp(str1, str2, 5));
	printf("AR:%d\n", ft_memcmp(str1, str2, 5));

	strcpy(str1, "abcdef");
	strcpy(str2, "abcdeg");
	printf("ER:%d\n", memcmp(str1, str2, 6));
	printf("AR:%d\n", ft_memcmp(str1, str2, 6));

	char *s1 = "\xff\xaa\xde\x12";
 	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	printf("ER:%d\n", memcmp(s1, s2, 4));
	printf("AR:%d\n", ft_memcmp(s1, s2, 4));

	return(0);
}
