#include <stdio.h> 
#include <string.h> 
#include "../libft.h"

int main() 
{ 
    char str[55] = "The memset writes len bytes of value c to the string b"; 
    char str1[55] = "The memset writes len bytes of value c to the string b"; 
    
	printf("\nTEST ft_memset()\n");
	printf("\nER:Before memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("ER:After memset():  %s", str);

    printf("\nAR:Before memset(): %s\n", str1); 
  
    // Fill 8 characters starting from str1[13] with '.' 
    ft_memset(str1 + 13, '.', 8*sizeof(char)); 
  
    printf("AR:After memset():  %s\n", str1);
	
	return 0; 
} 
