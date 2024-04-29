/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:57:52 by niarygin          #+#    #+#             */
/*   Updated: 2024/04/29 13:57:55 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns a copy of ’s1’ with the characters specified in ’set’ 
removed from the beginning and the end of the string.
Parameters:
- s1: The string to be trimmed.
- set: The reference set of characters to trim.
Return value: The trimmed string. NULL if the allocation fails.*/

static int	trim_char(char c, char const *trim_set)
{
	unsigned int	i;

	i = 0;
	while (trim_set[i])
	{
		if (c == trim_set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;
	
	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start])
	{
		if (trim_char(s1[start], set))
			start++;
		else
			break;
	}
	end = ft_strlen(s1);
	while (end != 0)
	{
		if (trim_char(s1[end - 1], set))
			end--;
		else
			break;
	}
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
	return (trimmed_str);
}
