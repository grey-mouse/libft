# Libft

In this project I implemented a set of functions from the C Standard Library _libc_, and also created additional non-standard functions and functions to work with linked lists.

`make all` compiles the project without linked lists functions.

`make bonus` includes linked lists functions.

### Standard functions

`ft_isalpha` - checks for an alphabetic character;

`ft_isdigit` - checks for a digit (0 through 9);

`ft_isalnum` - checks  for  an  alphanumeric  character;

`ft_isascii` - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set;

`ft_isprint` - checks for any printable character including space;

`ft_strlen` - calculates the length of the string;

`ft_memset` - fills memory with a constant byte;

`ft_bzero` - writes zeroes to the specified memory area;

`ft_memcpy` - copies memory area, memory areas must not overlap;

`ft_memmove` - copies memory area, memory areas may overlap;

`ft_strlcpy` - copies size-bounded string;

`ft_strlcat` - concatenates size-bounded string;

`ft_toupper` - converts to uppercase;

`ft_tolower` - converts to lowercase;

`ft_strchr` - locates first occurrence of the character in the string;

`ft_strrchr` - locates last occurrence of the character in the string;

`ft_strncmp` - compares two strings;

`ft_memchr` - scans memory for a character;

`ft_memcmp` - compares memory areas;

`ft_strnstr` - locates a substring in a string;

`ft_atoi` - converts a string to an integer;

`ft_calloc` - allocated dynamic memory, memory is set to zero;

`ft_strdup` - duplicates a string.

## Additional non-standard functions

`ft_substr` - allocates and returns a substring from the string;

`ft_strjoin` - allocates and returns a new string, which is the result of the concatenation;

`ft_strtrim` - allocates and returns a copy of a string with the specified characters removed from the beginning and the end of the string;

`ft_split` - allocates and returns an array of strings obtained by splitting a string using specified delimiter;

`ft_itoa` - allocates and returns a string representing the integer received as an argument;

`ft_strmapi` - applies specified function to each character of the string, and passing its index as first argument to create a new string resulting from successive applications of this function;

`ft_striteri` - applies specified function on each character of the string;

`fr_putchar_fd` - outputs the character to the given file descriptor;

`ft_putstr_fd` - outputs the string to the given file descriptor;

`ft_putendl_fd` - outputs the string to the given file descriptor followed by a newline;

`ft_putnbr_fd` - outputs the integer to the given file descriptor.

## Linked lists functions

`ft_lstnew` - allocates and returns a new node;

`ft_lstadd_front` - adds the node at the beginning of the list;

`ft_lstsize` - counts the number of nodes in a list;

`ft_lstlast` - returns the last node of the list;

`ft_lstadd_back` - adds the node at the end of the list;

`ft_lstdelone` - frees the memory of the node's content;

`ft_lstclear` - deletes and frees the given node and every successor of that node;

`ft_lstiter` - iterates the list and applies the specified function on the content of each node;

`ft_lstmap` - iterates the list and applies the specified function on the content of each node, and creates a new list resulting of the successive applications of this function.

