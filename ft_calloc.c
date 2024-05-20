/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:33:18 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/20 14:51:02 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function allocates memory for an array of count elements of size bytes
each and returns a pointer to the allocated memory. The memory is set to zero.
If count or size is 0, then ft_calloc() returns a unique pointer value that can
later be successfully passed to free().
If the multiplication of count and size would result in integer overflow, then
calloc() returns an error.
Return value:
The function returns a pointer to the allocated memory, which is suitably 
aligned for any type that fits into the requested size or less. On error, this
function return NULL and set errno. Attempting to allocate more than PTRDIFF_MAX
bytes is considered an error, as an object that large could cause later pointer
subtraction to overflow.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;
	size_t max_size;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	max_size = (size_t)-1;
	if ((size != 0 && count > max_size / size) || total_size > max_size / 2)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = (void *)malloc(total_size);
	if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
