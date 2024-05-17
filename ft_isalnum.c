/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:41:33 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 09:47:34 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks whether c, which must have the value  of  an  unsigned
char  or EOF, is an alphanumeric character.
Rerturn value: Nonzero if the character c is an alphanumeric character, and zero
if not.*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
