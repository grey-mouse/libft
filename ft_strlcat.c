/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:28:21 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 10:50:54 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function appends the NUL‐terminated string src to the end of dst. It will
append at most dstsize ‐ strlen(dst) ‐ 1 bytes, NUL‐terminating the result.

This function takes the full size of the buffer (not just the length) and
guarantees to NUL‐terminate the result (as long as there  is at least one byte
free in dst). Note that a byte for the NUL should be included in dstsize. Also
note the function only operates on true “C” strings. This means that both src
and dst must be NUL‐terminated.

Return value: The function returns the total length of the string it tried to
create. That means the initial length of dst plus the length of src.

Note, that if strlcat() traverses dstsize characters without finding a NUL,the
length of the string is considered to be dstsize and the destination string
will not be NUL‐terminated (since there was no space for the NUL). This keeps
strlcat() from running off the end of a string.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dest_len)
		return (src_len + dstsize);
	i = 0;
	j = dest_len;
	while (src[i] != '\0' && i < dstsize - dest_len - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (src_len + dest_len);
}
