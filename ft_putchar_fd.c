/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:50:06 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/10 12:26:49 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the character ’c’ to the given file descriptor.
Parameters:
- c: The character to output.
- fd: The file descriptor on which to write.*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
