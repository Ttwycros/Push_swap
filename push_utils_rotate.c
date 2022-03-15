/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:31 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/15 18:04:47 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **list_a)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_a;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*list_a = tmp->next;
	tmp->next = NULL;
	(*list_a)->next = tmp1;
	write(1, "rra\n", 4);
}

void	rrb(t_list **list_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_b;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*list_b = tmp->next;
	tmp->next = NULL;
	(*list_b)->next = tmp1;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_a;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*list_a = tmp->next;
	tmp->next = NULL;
	(*list_a)->next = tmp1;
	tmp = *list_b;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*list_b = tmp->next;
	tmp->next = NULL;
	(*list_b)->next = tmp1;
	write(1, "rr\n", 3);
}
