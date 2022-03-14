/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:26:01 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/14 19:26:45 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **list_a)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_a;
	tmp1 = tmp->next->next;
	*list_a = (*list_a)->next;
	(*list_a)->next = tmp;
	(*list_a)->next->next = tmp1;
	write(1, "sa\n", 3);
}

void	sb(t_list **list_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_b;
	tmp1 = tmp->next->next;
	*list_b = (*list_b)->next;
	(*list_b)->next = tmp;
	(*list_b)->next->next = tmp1;
	write(1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *list_a;
	tmp1 = tmp->next->next;
	*list_a = (*list_a)->next;
	(*list_a)->next = tmp;
	(*list_a)->next->next = tmp1;
	tmp = *list_b;
	tmp1 = tmp->next->next;
	*list_b = (*list_b)->next;
	(*list_b)->next = tmp;
	(*list_b)->next->next = tmp1;
	write(1, "ss\n", 3);
}