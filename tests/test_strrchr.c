#include "libft.h"
#include <stdio.h>
#include <string.h>

int main () {
	const char str[] = "https://www.hive.fi";
	const char str1[] = "https://www.hive.fi";
	const char str2[] = "https://www.hive.fi";
	const char str3[] = "https://www.hive.fi";
	const char str4[] = "https://www.hive.fi";
	const char str5[] = "https://www.hive.fi";
	const char ch = '.';
	const char ch1 = 'a';
	const char ch2 = '\0';
	char *res;

	printf("\nTEST ft_strrchr()\n");
	res = strrchr(str, ch);
	printf("ER:String after |%c| is - |%s|\n", ch, res);
	res = ft_strrchr(str1, ch);
    printf("AR:String after |%c| is - |%s|\n", ch, res);
	//no char found
	printf("ER:string before addr |%p|\n", str2);
	res = strrchr(str2, ch1);
    printf("ER:String after |%c| is - |%s|, addr|%p|\n", ch1, res, res);
	printf("AR:string before addr |%p|\n", str3);
	res = ft_strrchr(str3, ch1);
    printf("AR:String after |%c| is - |%s|, addr|%p|\n", ch1, res, res);
	// char is \0
	res = strrchr(str4, ch2);
    printf("ER:String after |\\0| is - |%s|\n", res);
	res = ft_strrchr(str5, ch2);
    printf("AR:String after |\\0| is - |%s|\n", res);
	return(0);
}
