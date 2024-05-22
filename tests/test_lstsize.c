#include "../libft.h"
#include <stdio.h>

int main()
{
    printf("\nTEST ft_lstsize()\n");
	// Test case 1: Empty list
    t_list *head1 = NULL;
    int size1 = ft_lstsize(head1);
    printf("Test case 1: Size of empty list is %d\n", size1); // Output: 0

    // Test case 2: List with one element
    t_list *head2 = (t_list *)malloc(sizeof(t_list));
    head2->content = NULL;
    head2->next = NULL;
    int size2 = ft_lstsize(head2);
    printf("Test case 2: Size of list with one element is %d\n", size2); // Output: 1

    // Test case 3: List with multiple elements
    t_list *head3 = (t_list *)malloc(sizeof(t_list));
    head3->content = NULL;
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    node1->content = NULL;
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2->content = NULL;
    head3->next = node1;
    node1->next = node2;
    node2->next = NULL;
    int size3 = ft_lstsize(head3);
    printf("Test case 3: Size of list with multiple elements (3) is %d\n", size3); // Output: 3

    // Free allocated memory
    free(head2);
    free(node1);
    free(node2);
    
    return 0;
}
