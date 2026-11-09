/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:17:04 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/10/24 19:17:07 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ssrc;
	unsigned char		*sdest;
	size_t				i;

	sdest = (unsigned char *)dest;
	ssrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return (dest);
}
