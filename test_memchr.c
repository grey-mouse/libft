#include "libft.h"
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "https://www.hive.fi";
   const char ch = '.';
   const char ch1 = 'a';
   const char ch2 = '\0';
   char *ret;

   printf("\nTEST ft_memchr()\n");
   printf("string addr before |%p|\n", str);
   ret = memchr(str, ch, strlen(str));
   printf("ER:String after |%c| is - |%s|, addr |%p|\n", ch, ret, ret);
   ret = ft_memchr(str, ch, strlen(str));
   printf("AR:String after |%c| is - |%s|, addr |%p|\n", ch, ret, ret);
   //char is in the string, but not found because of size limit
   ret = memchr(str, ch, 11);
   printf("ER:String after |%c| is - |%s|, addr |%p|\n", ch, ret, ret);
   ret = ft_memchr(str, ch, 11);
   printf("AR:String after |%c| is - |%s|, addr |%p|\n", ch, ret, ret);
   // char not found
   ret = memchr(str, ch1, strlen(str));
   printf("ER:String after |%c| is - |%s|, addr |%p|\n", ch1, ret, ret);
   ret = ft_memchr(str, ch1, strlen(str));
   printf("AR:String after |%c| is - |%s|, addr |%p|\n", ch1, ret, ret);
   // char is null terminator
   ret = memchr(str, ch2, strlen(str));
   printf("ER:String after |\\0| is - |%s|, addr |%p|\n", ret, ret);
   ret = ft_memchr(str, ch2, strlen(str));
   printf("AR:String after |\\0| is - |%s|, addr |%p|\n", ret, ret);
   // size is more than strlen and no char found
   ret = memchr(str, ch1, strlen(str) + 1);
   printf("ER:String after |%c| is - |%s|, addr |%p|\n", ch1, ret, ret);
   ret = ft_memchr(str, ch1, strlen(str) + 1);
   printf("AR:String after |%c| is - |%s|, addr |%p|\n", ch1, ret, ret);
   return(0);
}
