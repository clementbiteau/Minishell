/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:04:32 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:04:36 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H

# define CHAR_H

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_isupper(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_utf8_encode(int c, char *buff);
int	ft_isspace(int c);
int	ft_isnum(int c);
int	ft_iscntrl(int c);
#endif
