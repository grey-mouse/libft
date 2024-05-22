#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	//char dest[10] = "Hi!";
	char dest[10] = "Hi!456789";
	char src[4] = "Oho";
	//char dest1[10] = "Hi!";
	char dest1[10] = "Hi!456789";
	size_t l;
	size_t l1;
	printf("\nTEST ft_strlcat()\n");
	l = strlcat(dest, src, 10);
	printf("ER:dest=%s, l=%zu\n", dest, l);
	l1 = ft_strlcat(dest1, src, 10);
	printf("AR:dest=%s, l=%zu\n", dest1, l1);
	//when dstsize <= dest length
	char dest2[10] = "Hi!456789";
	char dest3[10] = "Hi!456789";
	l = strlcat(dest2, src, 0);
	printf("ER:dest1=%s, l=%zu\n", dest2, l);
	l1 = ft_strlcat(dest3, src, 0);
	printf("AR:dest1=%s, l=%zu\n", dest3, l1);
	
	char str1[15] = "Hello ";
	char str2[15] = "Hello ";

	printf("ER:%lu\n", strlcat(str1, "World!", sizeof(str1)));
	printf("ER:%s\n", str1);
	printf("AR:%zu\n", ft_strlcat(str2, "World!", sizeof(str2)));
	printf("AR:%s\n", str2);

	char str3[7] = "Hello ";
	char str4[7] = "Hello ";

	printf("ER:%lu\n", strlcat(str3, "World!", 7));
	printf("ER:%s\n", str3);
	printf("AR:%zu\n", ft_strlcat(str4, "World!", 7));
	printf("AR:%s\n", str4);
	
	char str5[1] = "";
	char str6[1] = "";

	printf("ER:%lu\n", strlcat(str5, "World!", sizeof(str5)));
	printf("ER:%s\n", str5);
	printf("AR:%zu\n", ft_strlcat(str6, "World!", sizeof(str6)));
	printf("AR:%s\n", str6);
}
