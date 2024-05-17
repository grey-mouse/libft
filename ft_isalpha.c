/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:25:00 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 09:43:05 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks whether c, which must have the value  of  an  unsigned
char  or EOF, is an alphabetic character.
Rerturn value: Nonzero if the character c is an alphabetic character, and zero
if not.*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
