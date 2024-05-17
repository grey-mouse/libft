/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:00:41 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/17 10:59:07 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If c is an uppercase letter, this function returns its lowercase equivalent,
if a lowercase representation exists in the current locale. Otherwise, it
returns c.
Return value: the converted letter, or c if the conversion was not possible.*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
