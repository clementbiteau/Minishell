/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:24:36 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:24:37 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2)
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}