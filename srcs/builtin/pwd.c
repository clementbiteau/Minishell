/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:32:50 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:32:52 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

int	ft_pwd(void)
{
	char	actual_dir[BUFFER_SIZE];

	if (!getcwd(actual_dir, sizeof(actual_dir)))
	{
		file_error("cannot get PWD", strerror(errno));
		return (1);
	}
	ft_putstr_fd(actual_dir, STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	return (0);
}
