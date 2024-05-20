#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "1234";

	char str3[] = "Hello";
    char str4[] = "1234";

    printf("\nTEST ft_memmove()\n");
	puts("ER:str1 before memmove ");
    puts(str1);

    /* Copies contents of str2 to sr1 */
    memmove(str1, str2, sizeof(str2));

    puts("\nER:str1 after memmove ");
    puts(str1);

	puts("\nAR:str3 before memmove ");
    puts(str3);

    /* Copies contents of str4 to str3 */
    ft_memmove(str3, str4, sizeof(str4));

    puts("\nAR:str3 after memmove ");
    puts(str3);

    char s[100] = "Learningisfun"; 
    char *first, *second; 
    first = s; 
    second = s; 
    printf("\nER:Original string :%s\n ", s); 
      
    // when overlap it start from first position 
    memmove(second + 8, first, 10); 
    printf("ER:memmove overlap : %s\n ", s); 

	char s1[100] = "Learningisfun";
    char *first1, *second1;
    first1 = s1;
    second1 = s1;
    printf("\nAR:Original string :%s\n ", s1);

    // when overlap it start from first position
    ft_memmove(second1 + 8, first1, 10);
    printf("AR:memmove overlap : %s\n ", s1);
    return 0;
}
