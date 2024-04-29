/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:37:38 by niarygin          #+#    #+#             */
/*   Updated: 2024/04/26 13:37:40 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’. 
Parameters: 
- s: The string from which to create the substring.
- start: The start index of the substring in the string ’s’.
- len: The maximum length of the substring.
Return value: The substring. NULL if the allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		sub_len = 0;
	else if (start + len > s_len)
		sub_len = s_len - start;
	else
		sub_len = len;
	sub = (char *) malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	if (start < s_len)
		ft_strlcpy(sub, s + start, sub_len + 1);
	else
		sub[0] = '\0';
	return (sub);
}
