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

	printf("\nTEST ft_strchr()\n");
	printf("ER:string addr before |%p|\n", str);
	res = strchr(str, ch);
	printf("ER:String after |%c| is - |%s|, addr |%p|\n", ch, res, res);
	printf("AR:string addr before |%p|\n", str1);
	res = ft_strchr(str1, ch);
    printf("AR:String after |%c| is - |%s|, addr |%p|\n", ch, res, res);
	// no char found
	printf("ER:string addr before |%p|\n", str2);
	res = strchr(str2, ch1);
    printf("ER:String after |%c| is - |%s|, addr |%p|\n", ch1, res, res);   
	printf("AR:string addr before |%p|\n", str3);
	res = ft_strchr(str3, ch1);
    printf("AR:String after |%c| is - |%s|, addr |%p|\n", ch1, res, res);
	// char is \0
	printf("ER:string addr before |%p|\n", str4);
	res = strchr(str4, ch2);
    printf("ER:String after |\\0| is - |%s|, addr |%p|\n", res, res);
	printf("AR:string addr before |%p|\n", str5);
	res = ft_strchr(str5, ch2);
    printf("AR:String after |\\0| is - |%s|, addr |%p|\n", res, res);

	return(0);
}
