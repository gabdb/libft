/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:16:37 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/18 20:13:13 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*head;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	cont = f(lst->content);
	ptr = ft_lstnew(cont);
	if (!ptr)
		return (ft_lstclear(&head, del), del(cont), NULL);
	head = ptr;
	lst = lst->next;
	while (lst != NULL)
	{
		cont = f(lst->content);
		ptr->next = ft_lstnew(cont);
		if (!ptr->next)
			return (ft_lstclear(&head, del), del(cont), NULL);
		ptr = ptr->next;
		lst = lst->next;
	}
	return (head);
}
