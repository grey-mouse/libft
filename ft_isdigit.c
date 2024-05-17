/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:42:24 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 09:45:55 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks whether c, which must have the value  of  an  unsigned
char  or EOF, is a digit (0 through 9).
Rerturn value: Nonzero if the character c is a digit (0 through 9), and zero
if not.*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
