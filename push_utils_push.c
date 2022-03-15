/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:21:40 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/15 18:04:43 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	*list_b = tmp->next;
	tmp->next = *list_a;
	*list_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_a;
	*list_a = tmp->next;
	tmp->next = *list_b;
	*list_b = tmp;
	write(1, "pb\n", 3);
}

void	ra(t_list **list_a)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_a;
	tmp1 = *list_a;
	*list_a = (*list_a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **list_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_b;
	tmp1 = *list_b;
	*list_b = (*list_b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_a;
	tmp1 = *list_a;
	*list_a = (*list_a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	tmp = *list_b;
	tmp1 = *list_b;
	*list_b = (*list_b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "rr\n", 3);
}
