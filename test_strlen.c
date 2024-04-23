#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};
	char *c = "";

	printf("\nTEST ft_strlen()\n");
    // using the %zu format specifier to print size_t
    printf("ER:Length of string a = %zu \n", strlen(a));
    printf("AR:Length of string a = %zu \n", ft_strlen(a));
    printf("ER:Length of string b = %zu \n", strlen(b));
    printf("AR:Length of string b = %zu \n", ft_strlen(b));
    printf("ER:Length of string c = %zu \n", strlen(c));
    printf("AR:Length of string c = %zu \n", ft_strlen(c));

    return 0;
}
