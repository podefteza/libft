/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:36:37 by carlos-j          #+#    #+#             */
/*   Updated: 2024/05/02 11:18:29 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given node and every successor of that node, using the
function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_address;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	node_address = *lst;
	while (node_address)
	{
		tmp = node_address->next;
		(*del)(node_address->content);
		free(node_address);
		node_address = tmp;
	}
	*lst = NULL;
}
