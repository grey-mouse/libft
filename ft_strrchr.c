/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:11:21 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 11:16:19 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function returns a pointer to the last occurrence of the character c in
the string s. Here "character" means "byte"; these functions do not work with
wide or multibyte characters.
Return value: The function returns a pointer to the matcheds character or NULL
if the character is not found. The terminating null byte is considered part of
the string, so that if c is specified as '\0', these functions return a pointer
to the terminator.*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int) ft_strlen(s);
	while (s[i] != (char) c)
	{
		i--;
		if (i < 0)
			return (NULL);
	}
	return ((char *)(s + i));
}
