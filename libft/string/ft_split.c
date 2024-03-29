/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:24:30 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:24:31 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stdlib.h>

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	wc;

	wc = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			wc++;
		while (*s && *s != c)
			s++;
	}
	return (wc);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	i;

	if (!s)
		return (NULL);
	dest = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			dest[i++] = ft_substr(s, 0, ft_wordlen(s, c));
		while (*s && *s != c)
			s++;
	}
	dest[i] = NULL;
	return (dest);
}
