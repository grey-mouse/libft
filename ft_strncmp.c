/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:13:41 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 11:22:51 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The function compares only the first (at most) n bytes of s1 and s2. The
comparison is done using unsigned characters.
Return value: The function returns an integer less than, equal to, or greater
than zero if the first n bytes of s1 is found, respectively, to be
less than, to match, or be greater than the first n bytes of s2.*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while (i < n)
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (diff != 0 || s1[i] == '\0')
			return (diff);
		i++;
	}
	return (0);
}
