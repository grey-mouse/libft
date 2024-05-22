#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
    char str1[] = "First string";
    char str2[] = "1234";
    char str3[] = "First string";
    char str4[] = "1234";
 
    printf("\nTEST ft_memcpy()\n");
	puts("ER:str1 before memcpy ");
    puts(str1);
 
    // Copies contents of str2 to str1
    //memcpy(str1, str2, sizeof(str2));
 	memcpy(str1, str2, 3);

    puts("ER:str1 after memcpy ");
    puts(str1);

	puts("AR:str1 before memcpy ");
    puts(str3);

    // Copies contents of str2 to str1
    //ft_memcpy(str3, str4, sizeof(str4));
	ft_memcpy(str3, str4, 3);

    puts("AR:str1 after memcpy ");
    puts(str3);
 
    return 0;
}
