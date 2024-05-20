#include "libft.h"
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

int main()
{
    printf("\nTEST ft_lstlast()\n");
	// Test case 1: Empty list
    t_list *head1 = NULL;
    t_list *last1 = ft_lstlast(head1);
    printf("Test case 1:\nAR: Last element of empty list is %p\n", last1);
	printf("ER: Last element of empty list is (nil)\n");

    // Test case 2: List with one element
    int *data2 = (int *)malloc(sizeof(int));
    *data2 = 42;
    t_list *node2 = ft_lstnew(data2);
    t_list *last2 = ft_lstlast(node2);
    printf("Test case 2:\nAR: Last element of list with one element is %d\n", *((int *)(last2->content)));
	printf("ER: Last element of list with one element is 42\n");
    
	// Test case 3: List with multiple elements
    int *data3_1 = (int *)malloc(sizeof(int));
    *data3_1 = 10;
    t_list *node3_1 = ft_lstnew(data3_1);
    int *data3_2 = (int *)malloc(sizeof(int));
    *data3_2 = 20;
    t_list *node3_2 = ft_lstnew(data3_2);
    node3_1->next = node3_2;
    t_list *last3 = ft_lstlast(node3_1);
    printf("Test case 3:\nAR: Last element of list with multiple elements is %d\n", *((int *)(last3->content)));
	printf("ER: Last element of list with multiple elements is 20\n");

    // Free allocated memory
    free_list(head1);
    free_list(node2);
    free_list(node3_1);

    return 0;
}