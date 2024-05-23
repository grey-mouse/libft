#include <string.h>
#include <stdio.h>
#include "../libft.h"
//For linux: #include <bsd/string.h>

int main() {
    //Basic Substring Search
	const char *haystack = "Hello, world!";
    const char *needle = "world";
    char *found = strnstr(haystack, needle, strlen(haystack));
	char *ft_found = ft_strnstr(haystack, needle, strlen(haystack));

    printf("\nTEST ft_strnstr()\n");
	if (found) {
        printf("ER:Found '%s' at position: %ld\n", needle, found - haystack);
    } else {
        printf("ER:Not found\n");
    }
	if (ft_found) {
        printf("AR:Found '%s' at position: %ld\n", needle, ft_found - haystack);
    } else {
        printf("AR:Not found\n");
    }
	//Substring Not Found
    const char *needle1 = "universe";
    found = strnstr(haystack, needle1, strlen(haystack));
	ft_found = ft_strnstr(haystack, needle1, strlen(haystack));

	if (found) {
        printf("ER:Found '%s' at position: %ld\n", needle1, found - haystack);
    } else {
        printf("ER:Not found\n");
    }
	if (ft_found) {
        printf("AR:Found '%s' at position: %ld\n", needle1, ft_found - haystack);
    } else {
        printf("AR:Not found\n");
    }
	//Substring at the Start of the String
    const char *needle2 = "Hello";
    found = strnstr(haystack, needle2, strlen(haystack));
	ft_found = ft_strnstr(haystack, needle2, strlen(haystack));

	if (found) {
        printf("ER:Found '%s' at position: %ld\n", needle2, found - haystack);
    } else {
        printf("ER:Not found\n");
    }
	if (ft_found) {
        printf("AR:Found '%s' at position: %ld\n", needle2, ft_found - haystack);
    } else {
        printf("AR:Not found\n");
    }
	//Substring at the End of the String
    const char *needle3 = "!";
    found = strnstr(haystack, needle3, strlen(haystack));
	ft_found = ft_strnstr(haystack, needle3, strlen(haystack));

	if (found) {
        printf("ER:Found '%s' at position: %ld\n", needle3, found - haystack);
    } else {
        printf("ER:Not found\n");
    }
	if (ft_found) {
        printf("AR:Found '%s' at position: %ld\n", needle3, ft_found - haystack);
    } else {
        printf("AR:Not found\n");
    }
	//Substring Exceeds Length Limit (should be not found)
	const char *needle4 = "o, world!";
    found = strnstr(haystack, needle4, 5);
	ft_found = ft_strnstr(haystack, needle4, 5);

	if (found) {
        printf("ER:Found '%s' at position: %ld\n", needle4, found - haystack);
    } else {
        printf("ER:Not found\n");
    }
	if (ft_found) {
        printf("AR:Found '%s' at position: %ld\n", needle4, ft_found - haystack);
    } else {
        printf("AR:Not found\n");
    }
	//Empty Substring
	const char *needle5 = "";
    found = strnstr(haystack, needle5, 5);
	ft_found = ft_strnstr(haystack, needle5, 5);

	if (found) {
        printf("ER:Found '%s' at position: %ld\n", needle5, found - haystack);
    } else {
        printf("ER:Not found\n");
    }
	if (ft_found) {
        printf("AR:Found '%s' at position: %ld\n", needle5, ft_found - haystack);
    } else {
        printf("AR:Not found\n");
    }
    return 0;
}

