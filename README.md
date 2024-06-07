# Libft

In this project I implemented a set of functions from the C Standard Library _libc_, and also created additional non-standard functions and functions to work with linked lists.

`make all` compiles the project without linked lists functions.

`make bonus` includes linked lists functions.

### Standard functions

[`ft_isalpha`](ft_isalpha.c) - checks for an alphabetic character;

[`ft_isdigit`](ft_isdigit.c) - checks for a digit (0 through 9);

[`ft_isalnum`](ft_isalnum.c) - checks  for  an  alphanumeric  character;

[`ft_isascii`](ft_isascii.c) - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set;

[`ft_isprint`](ft_isprint.c) - checks for any printable character including space;

[`ft_strlen`](ft_strlen.c) - calculates the length of the string;

[`ft_memset`](ft_memset.c) - fills memory with a constant byte;

[`ft_bzero`](ft_bzero.c) - writes zeroes to the specified memory area;

[`ft_memcpy`](ft_memcpy.c) - copies memory area, memory areas must not overlap;

[`ft_memmove`](ft_memmove.c) - copies memory area, memory areas may overlap;

[`ft_strlcpy`](ft_strlcpy.c) - copies size-bounded string;

[`ft_strlcat`](ft_strlcat.c) - concatenates size-bounded string;

[`ft_toupper`](ft_toupper.c) - converts to uppercase;

[`ft_tolower`](ft_tolower.c) - converts to lowercase;

[`ft_strchr`](ft_strchr.c) - locates first occurrence of the character in the string;

[`ft_strrchr`](ft_strrchr.c) - locates last occurrence of the character in the string;

[`ft_strncmp`](ft_strncmp.c) - compares two strings;

[`ft_memchr`](ft_memchr.c) - scans memory for a character;

[`ft_memcmp`](ft_memcmp.c) - compares memory areas;

[`ft_strnstr`](ft_strnstr.c) - locates a substring in a string;

[`ft_atoi`](ft_atoi.c) - converts a string to an integer;

[`ft_calloc`](ft_calloc.c) - allocated dynamic memory, memory is set to zero;

[`ft_strdup`](ft_strdup.c) - duplicates a string.

## Additional non-standard functions

[`ft_substr`](ft_substr.c) - allocates and returns a substring from the string;

[`ft_strjoin`](ft_strjoin.c) - allocates and returns a new string, which is the result of the concatenation;

[`ft_strtrim`](ft_strtrim.c) - allocates and returns a copy of a string with the specified characters removed from the beginning and the end of the string;

[`ft_split`](ft_split.c) - allocates and returns an array of strings obtained by splitting a string using specified delimiter;

[`ft_itoa`](ft_itoa.c) - allocates and returns a string representing the integer received as an argument;

[`ft_strmapi`](ft_strmapi.c) - applies specified function to each character of the string, and passing its index as first argument to create a new string resulting from successive applications of this function;

[`ft_striteri`](ft_striteri.c) - applies specified function on each character of the string;

[`fr_putchar_fd`](fr_putchar_fd.c) - outputs the character to the given file descriptor;

[`ft_putstr_fd`](ft_putstr_fd.c) - outputs the string to the given file descriptor;

[`ft_putendl_fd`](ft_putendl_fd.c) - outputs the string to the given file descriptor followed by a newline;

[`ft_putnbr_fd`](ft_putnbr_fd.c) - outputs the integer to the given file descriptor.

## Linked lists functions

[`ft_lstnew`](ft_lstnew.c) - allocates and returns a new node;

[`ft_lstadd_front`](ft_lstadd_front.c) - adds the node at the beginning of the list;

[`ft_lstsize`](ft_lstsize.c) - counts the number of nodes in a list;

[`ft_lstlast`](ft_lstlast.c) - returns the last node of the list;

[`ft_lstadd_back`](ft_lstadd_back.c) - adds the node at the end of the list;

[`ft_lstdelone`](ft_lstdelone.c) - frees the memory of the node's content;

[`ft_lstclear`](ft_lstclear.c) - deletes and frees the given node and every successor of that node;

[`ft_lstiter`](ft_lstiter.c) - iterates the list and applies the specified function on the content of each node;

[`ft_lstmap`](ft_lstmap.c) - iterates the list and applies the specified function on the content of each node, and creates a new list resulting of the successive applications of this function.

