/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:07:03 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:07:04 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H

# define FT_GNL_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# define BUFFER_SIZE 2048

typedef struct s_chunk
{
	char	*data;
	int		len;
	int		init;
}				t_chunk;

t_chunk			*ft_rallocat(t_chunk *chunk, char *data, int len);
t_chunk			*ft_rallocut(t_chunk *chunk, int start);
char			*ft_extractstr(t_chunk *chunk, int size);
void			ft_initchunk(t_chunk *chunk);
int				ft_getendl(t_chunk *chunk);
int				ft_gnl(int fd, char **line);
void			delete_gnl(char *s1, char *s2, int to_del);
char			*compute_first_part(size_t size, char *strs[2],
					int to_del, size_t *i);
void			set_value(char *s1, char *s2, char *strs[2]);
#endif
