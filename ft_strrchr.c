/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:11:21 by niarygin          #+#    #+#             */
/*   Updated: 2024/04/24 16:03:11 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int) ft_strlen(s);
	while (s[i] != (char) c)
	{
		i--;
		if (i < 0)
			return (0);
	}
	return ((char *)(s + i));
}
