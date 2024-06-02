/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:12:55 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/30 13:48:29 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a new node. The member variable
’content’ is initialized with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main()
{
	char *content = "Hello, world!";
	t_list *new_node = ft_lstnew(content);
	printf("Content: %s\n", (char *)new_node->content);
	return (0);	
}*/
