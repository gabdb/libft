/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:55:05 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/17 16:16:14 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	// (*new_node).content == new_node->content
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main(void)
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("Hello"));
	printf("%s", node->content);
	free(node);
	return (0);
}
*/