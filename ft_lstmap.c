/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:24:40 by eleon-go          #+#    #+#             */
/*   Updated: 2023/01/28 13:25:06 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*orig;

	new_lst = NULL;
	orig = lst;
	while (orig)
	{
		new_node = ft_lstnew(f(orig->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_lst, new_node);
		orig = orig->next;
	}
	return (new_lst);
}
