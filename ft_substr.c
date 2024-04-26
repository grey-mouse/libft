/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:37:38 by niarygin          #+#    #+#             */
/*   Updated: 2024/04/26 13:37:40 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*sub;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		sub_len = 0;
	else if (start + len > s_len)
		sub_len = s_len - start;
	else
		sub_len = len;
	sub = (char *) malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
