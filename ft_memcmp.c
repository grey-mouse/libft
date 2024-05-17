/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:57:46 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 14:22:10 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function compares the first n bytes (each interpreted as unsigned char)
of the memory areas s1 and s2.
Return value: The function returns an integer less than, equal to, or greater
than zero if the first n bytes of s1 is found, respectively, to be less than,
to match, or be greater than the first n bytes of s2.
For  a  nonzero return value, the sign is determined by the sign of the
difference between the first pair of bytes (interpreted as unsigned char) that
differ in s1 and s2.
If n is zero, the return value is zero.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		i++;
	return ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
}
