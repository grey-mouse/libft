#include "../libft.h"
#include <stdio.h>

// Define a sample function to delete content (for testing)
void delete_content(void *content) {
    free(content);
}

// Define a function to print the content of a list node
void print_list(t_list *lst) {
    while (lst) {
        printf("%d ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

// Define a function to test ft_lstclear
void test_ft_lstclear() {
    printf("\nTEST ft_lstclear()\n");
	// Create a sample list
    t_list *head = ft_lstnew((void *)malloc(sizeof(int)));
    *(int *)head->content = 1;
    head->next = ft_lstnew((void *)malloc(sizeof(int)));
    *(int *)head->next->content = 2;
    head->next->next = ft_lstnew((void *)malloc(sizeof(int)));
    *(int *)head->next->next->content = 3;

    // Print the list before clearing
    printf("Before clearing: ");
    print_list(head);

    // Clear the list
    ft_lstclear(&head, &delete_content);

    // Print the list after clearing (should be empty)
    printf("After clearing (should be empty): ");
    print_list(head);
}

int main() {
    // Test ft_lstclear function
    test_ft_lstclear();

    return 0;
}
