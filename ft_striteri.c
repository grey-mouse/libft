/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:28:40 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/07 15:44:36 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument. Each character is passed by address to ’f’
to be modified if necessary.
Parameters:
- s: The string on which to iterate.
- f: The function to apply to each character.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
	s[i] = '\0';
}