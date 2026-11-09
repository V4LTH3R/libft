/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:12:09 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/11/02 11:50:18 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		new = (tmp)->next;
		del(tmp->content);
		free(tmp);
		tmp = new;
	}
	*lst = NULL;
}
