#include "../libft.h"
#include <stdio.h>

int main()
{
    printf("\nTEST ft_lstnew()\n");
	// Test case 1: Creating the first element with integer content
    int *int_ptr1 = (int *)malloc(sizeof(int));
    *int_ptr1 = 42;
    t_list *node1 = ft_lstnew(int_ptr1);

    // Creating the second element with string content
    char *str2 = "Hello, world!";
    t_list *node2 = ft_lstnew(str2);

    // Linking the first and second elements
    node1->next = node2;

    // Printing content of both elements
    printf("Node 1 content: %d, Next: %p\n", *((int *)(node1->content)), node1->next);
    printf("Node 2 content: %s, Next: %p\n", (char *)(node1->next->content), node2->next);

    // Freeing allocated memory
    free(int_ptr1);
    free(node1);
    free(node2);
    return 0;
}
