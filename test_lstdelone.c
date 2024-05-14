#include "libft.h"
#include <stdio.h>
#include <string.h>

void free_str(void *str)
{
	free(str);
	str = NULL;
}

int main()
{
    printf("\nTEST ft_lstdelone()\n");
	// Test case: Deleting a single node with string content
    char *data = malloc(14);
	strcpy(data, "Hello, world!");
	t_list *node = ft_lstnew(data);
    
    printf("Before deletion: content = %s, node addr %p, content addr %p\n", (char*)node->content, node, node->content);
    ft_lstdelone(node, free_str);
	if (!node)
    	printf("AR: After deletion: (null)\n");
	else
		printf("After delition, node %p, content %p\n", node, node->content);
	
    return 0;
}
