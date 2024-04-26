#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int *ptr;

	printf("\nTEST ft_calloc()\n");
	//Basic Allocation Test
	ptr = calloc(1, sizeof(int));
	if (ptr == NULL) {
    	printf("ER:Memory allocation failed.\n");
	} else {
    	*ptr = 10;
    	printf("ER:Allocated memory: %d\n", *ptr);
    	free(ptr);
	}
	ptr = ft_calloc(1, sizeof(int));
	if (ptr == NULL) {
    	printf("AR:Memory allocation failed.\n");
	} else {
    	*ptr = 10;
    	printf("AR:Allocated memory: %d\n", *ptr);
    	free(ptr);
	}
	//Multiple Blocks Allocation Test
	ptr = calloc(5, sizeof(int));
	if (ptr == NULL) {
    	printf("ER:Memory allocation failed.\n");
	} else {
    	for (int i = 0; i < 5; i++) {
        	printf("ER:Block %d: %d\n", i, ptr[i]);
    	}
    free(ptr);
	}
	ptr = ft_calloc(5, sizeof(int));
	if (ptr == NULL) {
    	printf("AR:Memory allocation failed.\n");
	} else {
    	for (int i = 0; i < 5; i++) {
        	printf("AR:Block %d: %d\n", i, ptr[i]);
    	}
    free(ptr);
	}
}
