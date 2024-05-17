/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:34:51 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 10:09:14 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function  erases  the  data  in the n bytes of the memory starting at the
location pointed to by s, by writing zeros (bytes  containing '\0') to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return ;
}
