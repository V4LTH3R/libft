/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:18:08 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/10/24 19:18:09 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	sl;
	size_t	total;

	if (!s)
		return (NULL);
	sl = ft_strlen(s);
	if (start >= sl)
		return (ft_strdup(""));
	total = sl - start;
	if (total > len)
		total = len;
	res = malloc(total + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < total)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = 0;
	return (res);
}
