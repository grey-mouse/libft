/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:35:16 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 15:55:34 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function converts the initial portion of the string pointed to by str to
int. The behavior is the same as strtol(str, NULL, 10); except that atoi() does
not detect errors.
The string may begin with an arbitrary amount of white space (as determined by 
isspace) followed by a single optional '+' or '-' sign. The remainder of the
string is converted to a long value, stopping at the first character which is
not a valid digit.
Return value: The converted value or 0 on error.
In case of overflow returns -1 (value > LLONG_MAX) or 0 (value < LLONG_MIN).
*/

static long	calculate_result(const char *str, unsigned int i, int sign)
{
	long	result;
	long	temp_result;

	result = 0;
	temp_result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp_result = result;
		result = result * 10 + (str[i] - '0');
		if (sign == 1 && temp_result > result)
			return (-1);
		else if (sign == -1 && temp_result > result)
			return (0);
		i++;
	}
	return (result);
}


int	ft_atoi(const char *str)
{
	long			result;
	int				sign;
	unsigned int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] && ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	result = calculate_result(str, i, sign);
	return ((int)(result * sign));
}
