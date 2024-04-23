/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:12:38 by niarygin          #+#    #+#             */
/*   Updated: 2024/04/23 14:32:21 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = len(dest);
	src_len = len(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	i = 0;
	j = dest_len;
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (src_len + dest_len);
}
	
}
