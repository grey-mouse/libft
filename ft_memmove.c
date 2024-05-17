/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:49:15 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 10:18:15 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function copies n bytes from memory area src to memory area dst. The 
memory areas may overlap: copying takes place as though the bytes in src are
first copied into a temporary array that does not overlap  src  or dst, and the
bytes are then copied from the temporary array to dest.
Return value: a pointer to dst.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
