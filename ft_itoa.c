/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:24:12 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/10/24 18:24:16 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_nblen(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long		nb;
	int			len;
	char		*arr;

	nb = n;
	len = ft_nblen(nb);
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	arr[len] = 0;
	if (nb == 0)
		arr[0] = '0';
	if (nb < 0)
	{
		arr[0] = '-';
		nb *= -1;
	}
	while (nb)
	{
		len--;
		arr[len] = nb % 10 + 48;
		nb /= 10;
	}
	return (arr);
}
