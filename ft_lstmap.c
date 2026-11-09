/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:24:37 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/11/02 11:47:29 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	current = lst;
	while (current)
	{
		content = f(current->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		current = current->next;
	}
	return (new_lst);
}
