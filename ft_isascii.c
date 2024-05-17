/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:39:06 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 09:50:46 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks whether c, which must have the value  of  an  unsigned
char  or EOF, is a 7‐bit unsigned char value that  fits  into the ASCII 
character set.
Rerturn value: Nonzero if the character c is a 7‐bit unsigned char value that
fits  into the ASCII character set, and zero if not.*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
