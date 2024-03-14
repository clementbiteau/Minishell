/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:31:59 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:32:01 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTIN_H

# define BUILTIN_H

# include "../minishell.h"

# define IN_PIPES		0
# define NOT_IN_PIPES	2

int		ft_cd(int argc, char **argv, t_list **env_var);
int		ft_exit(int argc, char **argv, t_list **env_var, t_bool in_pipes);
int		ft_echo(int argc, char **argv);
int		ft_env(t_list *env_var);
int		ft_unset(int argc, char **argv, t_list **env_var);
int		ft_pwd(void);
int		print_export(t_list *env_var);
char	*catch_key(char **str, int *error, int *append);
int		ft_export(int argc, char **argv, t_list **env_var);

#endif
