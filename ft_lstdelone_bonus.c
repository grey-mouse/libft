/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:26:38 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/20 15:42:08 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Takes as a parameter a node and frees the memory of the node’s content using
the function ’del’ given as a parameter and free the node. The memory of ’next’
must not be freed.
Parameters:
- lst: The node to free.
- del: The address of the function used to delete the content.*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
