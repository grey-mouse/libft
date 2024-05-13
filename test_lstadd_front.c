#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Function to print the contents of the linked list
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *((int *)(lst->content))); // Assuming content is an int pointer
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    printf("\nTEST ft_lstadd_front()\n");
	// Test case 1: Adding a new element to an empty list
    t_list *head1 = NULL;
    int *int_ptr1 = (int *)malloc(sizeof(int));
    *int_ptr1 = 42;
    t_list *new_node1 = (t_list *)malloc(sizeof(t_list));
    new_node1->content = int_ptr1;
    new_node1->next = NULL;
    ft_lstadd_front(&head1, new_node1);
    printf("Test case 1: ");
    print_list(head1);
	printf("ER: Output: 42 -> NULL\n");

    // Test case 2: Adding a new element to a non-empty list
    t_list *head2 = NULL;
    int *int_ptr2 = (int *)malloc(sizeof(int));
    *int_ptr2 = 10;
    t_list *new_node2 = (t_list *)malloc(sizeof(t_list));
    new_node2->content = int_ptr2;
    new_node2->next = NULL;
    ft_lstadd_front(&head2, new_node2);
    int *int_ptr3 = (int *)malloc(sizeof(int));
    *int_ptr3 = 20;
    t_list *new_node3 = (t_list *)malloc(sizeof(t_list));
    new_node3->content = int_ptr3;
    new_node3->next = NULL;
    ft_lstadd_front(&head2, new_node3);
    printf("Test case 2: ");
    print_list(head2); // Output: 20 -> 10 -> NULL
	printf("ER: Output: 20 -> 10 -> NULL\n");

    return 0;
}