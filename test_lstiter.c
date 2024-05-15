#include "libft.h"
#include <stdio.h>

// Define a sample function to iterate over the content of a list node
void print_content(void *content) {
    printf("%d ", (*(int *)content) + 1);
}

// Define a function to test ft_lstiter
void test_ft_lstiter() {
    printf("\nTEST ft_lstiter()\n");
	// Create a sample list
    t_list *head = NULL;
    ft_lstadd_back(&head, ft_lstnew((void *)malloc(sizeof(int))));
    *(int *)head->content = 1;
    ft_lstadd_back(&head, ft_lstnew((void *)malloc(sizeof(int))));
    *(int *)head->next->content = 2;
    ft_lstadd_back(&head, ft_lstnew((void *)malloc(sizeof(int))));
    *(int *)head->next->next->content = 3;

    // Print the list before iterating
    printf("Before iterating: ");
    t_list *temp = head;
    while (temp) {
        printf("%d ", *(int *)temp->content);
        temp = temp->next;
    }
    printf("\n");

    // Iterate over the list
    printf("After iterating (should be+1): ");
    ft_lstiter(head, &print_content);
    printf("\n");
}

int main() {
    // Test ft_lstiter function
    test_ft_lstiter();

    return 0;
}

