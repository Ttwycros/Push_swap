/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:17:42 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/15 19:54:37 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

void			sa(t_list **list_a);
void			sb(t_list **list_b);
void			ra(t_list **list_a);
void			rb(t_list **list_b);
void			rra(t_list **list_a);
void			rrb(t_list **list_b);
void			ss(t_list **list_a, t_list **list_b);
void			rr(t_list **list_a, t_list **list_b);
void			rrr(t_list **list_a, t_list **list_b);
void			pa(t_list **list_a, t_list **list_b);
void			pb(t_list **list_a, t_list **list_b);

void			error_message(char	*message);
long long int	ft_atoi_long(const char	*number);
void			check_dup(t_list	*lst);
void			create_list(char	*str, t_list	**lst);
int				sorted(t_list	*lst);
void			succes_exit(t_list	**lst);
void			add_index(t_list *lst, int list_size);
int				max_elem(t_list *lst);
int				min_elem(t_list	*lst);
void			size_3(t_list	**lst_a);
void			size_45(t_list	**lst_a, t_list	**lst_b);
void			big_sort(t_list **lst_a, t_list **lst_b, int k);
void			delete_content(int content);

#endif