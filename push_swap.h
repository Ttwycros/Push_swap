/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:17:42 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/14 19:14:40 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

void			error_message(char	*message);
long long int	ft_atoi_long(const char	*number);
void			check_dup(t_list	*lst);
void			create_list(char	*str, t_list	**lst);
int				sorted(t_list	*lst);
void			succes_exit(t_list	**lst);

#endif