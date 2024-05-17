/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:42:51 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 10:56:31 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts lowercase letters to uppercase. If c is a lowercase letter, the
function returns its uppercase equivalent, if an uppercase representation
exists in the current locale. Otherwise, it returns c.
If c is neither an unsigned char value nor EOF, the behavior is undefined.
Return value: converted letter, or c if the converion was not possible.*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
