/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:07:43 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 14:48:24 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function locates the first occurrence of the null‐terminated string
needle in the string haystack, where not more than len characters are searched.
Characters that appear after a '\0' character are not searched.
Return value: 
If needle is an empty string, haystack is returned;
if needle occurs nowhere in big, NULL is returned;
otherwise a pointer to the first character of the first occurrence of little is
returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle && !haystack)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && i + j < len && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (NULL);
}
