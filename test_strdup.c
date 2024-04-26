#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	printf("\nTEST ft_strdup()\n");

	//Basic Duplication Test
	char source[] = "Hello, World!";
    char *target = strdup(source);
    printf("src: %s | address: %p\n", source, source);
	if (target == NULL) {
        printf("ER:Memory allocation failed.\n");
        return 1;
    }
    printf("ER:Duplicated string: %s\n", target);
	printf("ER: dup addr |%p|\n", target);
    free(target);
    char *target1 = ft_strdup(source);
    if (target1 == NULL) {
        printf("AR:Memory allocation failed.\n");
        return 1;
    }
    printf("AR:Duplicated string: %s\n", target1);
	printf("AR: dup addr |%p|\n", target1);
    free(target1);
}