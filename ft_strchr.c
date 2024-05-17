/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:13:25 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 11:08:55 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function returns a pointer to the first occurrence of the character c in
the string s. Here "character" means "byte"; this function does not work with
wide or multibyte characters.
Return value: This function returns a pointer to the matched character or NULL
if the character is not found. The terminating null byte is considered part of
the string, so that if c is specified as '\0', this function returns a pointer
to the terminator.*/

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != (char) c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}
