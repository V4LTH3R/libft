/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:44:23 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/10/31 18:11:55 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pnt;

	if (nmemb == 0 || size == 0)
	{
		pnt = malloc(0);
		if (!pnt)
			return (NULL);
		return (pnt);
	}
	if (nmemb > ~(size_t)0 / size)
		return (NULL);
	pnt = malloc(nmemb * size);
	if (!pnt)
		return (NULL);
	ft_bzero(pnt, nmemb * size);
	return (pnt);
}
