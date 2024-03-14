/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:32:57 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:32:59 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

static int	varcmp(t_var *var, t_var *ref)
{
	return (ft_strcmp(var->key, ref->key));
}

int	ft_unset(int argc, char **argv, t_list **env_var)
{
	int		i;
	t_var	var;

	i = 0;
	while (i < argc)
	{
		var.key = argv[i++];
		ft_lstremove_one_if(env_var, &var, varcmp, free_var);
	}
	return (0);
}
