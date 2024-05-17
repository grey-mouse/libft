/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:33:36 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 10:02:53 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function fills the first len bytes of the memory area pointed to by b
with the constant byte c.
Return value: a pointer to the memory area b.*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
