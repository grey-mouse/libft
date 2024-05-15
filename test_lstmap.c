#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Define a sample function to apply on the content of a list node
void *double_content(void *content) {
    int *value = (int *)content;
    *value *= 2;
    return value;
}

// Define a function to print the content of a list
void print_list(t_list *lst) {
    while (lst) {
        printf("%d ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

// Define a function to delete the content of a list node
void delete_content(void *content) {
    free(content);
}

// Define a function to test ft_lstmap
void test_ft_lstmap() {
    printf("\nTEST ft_lstmap()\n");
	// Create a sample list
    t_list *head = NULL;
    ft_lstadd_back(&head, ft_lstnew((void *)malloc(sizeof(int))));
    *(int *)head->content = 1;
    ft_lstadd_back(&head, ft_lstnew((void *)malloc(sizeof(int))));
    *(int *)head->next->content = 2;
    ft_lstadd_back(&head, ft_lstnew((void *)malloc(sizeof(int))));
    *(int *)head->next->next->content = 3;

    // Print the original list
    printf("Original list: ");
    print_list(head);

    // Apply ft_lstmap with double_content function
    t_list *new_list = ft_lstmap(head, &double_content, &delete_content);

    // Print the new list after applying ft_lstmap (shoul be double)
    printf("New list after applying ft_lstmap (should be double): ");
    print_list(new_list);

    // Free the original list
    while (head) {
        t_list *temp = head->next;
        free(head->content);
        free(head);
        head = temp;
    }

    // Free the new list
    while (new_list) {
        t_list *temp = new_list->next;
        free(new_list);
        new_list = temp;
    }
}

int main() {
    // Test ft_lstmap function
    test_ft_lstmap();

    return 0;
}
