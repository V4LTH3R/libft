/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v4lth3r <v4lth3r@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:16:01 by v4lth3r          #+#    #+#             */
/*   Updated: 2026/10/29 14:18:13 by v4lth3r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_freedashit(char **arr, int index)
{
	while (index--)
		free(arr[index]);
	free(arr);
	return (NULL);
}

static char	**ft_splithelper(char **arr, char const *s, char c, int count)
{
	int	i;
	int	wordlen;

	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		wordlen = ft_wordlen(s, c);
		arr[i] = malloc(sizeof(char) * (wordlen + 1));
		if (!arr[i])
			return (ft_freedashit(arr, i));
		ft_strlcpy(arr[i], s, wordlen + 1);
		s += wordlen;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;

	if (!s)
		return (NULL);
	count = ft_wordcount(s, c);
	arr = malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	return (ft_splithelper(arr, s, c, count));
}
