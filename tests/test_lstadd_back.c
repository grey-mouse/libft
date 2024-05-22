#include "../libft.h"
#include <stdio.h>

// Function to free memory allocated for the linked list
void free_list(t_list *head)
{
    t_list *tmp;
    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

// Function to print the contents of the linked list
void print_list(t_list *head)
{
    while (head)
    {
        printf("%d -> ", *((int *)(head->content))); // Assuming content is an int pointer
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    printf("\nTEST ft_lstadd_back()\n");
	// Test case 1: Adding to an empty list
    t_list *head1 = NULL;
    int *data1 = (int *)malloc(sizeof(int));
    *data1 = 42;
    t_list *new_node1 = ft_lstnew(data1);
    ft_lstadd_back(&head1, new_node1);
    printf("Test case 1:\nAR: List after adding to empty list: ");
    print_list(head1);
	printf("ER: List after adding to empty list: 42 -> NULL\n");

    // Test case 2: Adding to a non-empty list
    int *data2_1 = (int *)malloc(sizeof(int));
    *data2_1 = 10;
    t_list *node2_1 = ft_lstnew(data2_1);
    int *data2_2 = (int *)malloc(sizeof(int));
    *data2_2 = 20;
    t_list *node2_2 = ft_lstnew(data2_2);
    node2_1->next = node2_2;
    ft_lstadd_back(&node2_1, new_node1);
    printf("Test case 2:\nAR: List after adding to non-empty list: ");
    print_list(node2_1);
	printf("ER: List after adding to non-empty list: 10 -> 20 -> 42 -> NULL\n");
    // Free allocated memory
    //free_list(head1);
    free_list(node2_1);

    return 0;
}
