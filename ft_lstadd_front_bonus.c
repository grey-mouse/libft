/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:16:05 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/13 10:47:44 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Adds the node ’new’ at the beginning of the list.
Parameters:
- lst: The address of a pointer to the first link of a list.
- new: The address of a pointer to the node to be added to the list.*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}