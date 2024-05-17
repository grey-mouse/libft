/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:12:38 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 10:31:47 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function copies up to dstsize ‐ 1 characters from the NUL‐terminated
string src to dst, NUL‐terminating the result.

The function takes the full size of the buffer (not just the length) and
guarantees to NUL‐terminate the result (as long as size is larger than 0). Note
that a byte for the NUL should be included in size. Also note that this function
only operates on true “C” strings. This means that src must be NUL‐terminated.

Return value: this function returns the total length of the string it tried to
create. That means the length of src.*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
