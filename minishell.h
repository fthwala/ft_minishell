/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 14:37:56 by fthwala           #+#    #+#             */
/*   Updated: 2017/09/20 14:58:26 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include "./libft/libft.h"

char **g_envv;

int		exec_bin(char **args);
void	print_env(void);
int		envv_len(char **envv);
int		my_echo(char **args);
int		my_unsetenv(char **args);
int		my_setenv(char **args);
char	*find_envv(char *var);
int		find_position(char *var);
int		my_cd(char **args);
void	set_env(char *name, char *value);

#endif
