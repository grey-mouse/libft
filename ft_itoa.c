/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:08:50 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/07 14:28:18 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns a string representing the integer received as an
argument. Negative numbers must be handled.
Parameters: 
- n: the integer to convert.
Return value: The string representing the integer. NULL if the allocation
fails.*/

static unsigned int	ft_number_len(int n)
{
	unsigned int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_to_str(char *str, unsigned int n, unsigned int len)
{
	while (n > 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;

	len = ft_number_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	str = ft_to_str(str, n, len - 1);
	return (str);
}
