/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:33:19 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 09:51:59 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks whether c, which must have the value  of  an  unsigned
char  or EOF, is any printable character including space.
Rerturn value: Nonzero if the character c is any printable character including
space, and zero if not.*/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
