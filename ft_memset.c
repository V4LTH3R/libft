/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:11:25 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/10/24 18:17:38 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*str;
	size_t				i;

	str = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
