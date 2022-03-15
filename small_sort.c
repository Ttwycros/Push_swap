/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:46:39 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/15 19:54:02 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_elem(t_list *lst)
{
	int		i;

	i = 0;
	i = lst->index;
	while (lst != NULL)
	{
		if (i < lst->index)
			i = lst->index;
		lst = lst->next;
	}
	return (i);
}

int	min_elem(t_list	*lst)
{
	int	i;

	i = INT_MAX;
	while (lst)
	{
		if (lst->index < i)
			i = lst->index;
		lst = lst->next;
	}
	return (i);
}

void	size_3(t_list	**lst_a)
{
	while (!sorted(*lst_a))
	{
		if ((*lst_a)->index < (*lst_a)->next->index)
			rra(lst_a);
		else if ((*lst_a)->index == max_elem(*lst_a)
			&& (*lst_a)->next->index == min_elem(*lst_a))
			ra(lst_a);
		else
			sa(lst_a);
	}
}

static void	search(t_list	**lst_a, int (*f)(t_list *))
{
	while ((*lst_a)->index != f(*lst_a))
	{
		if ((*lst_a)->next->index != f(*lst_a)
			&& (*lst_a)->next->next->index != f(*lst_a))
			rra(lst_a);
		else
			ra(lst_a);
	}
}

void	size_45(t_list	**lst_a, t_list	**lst_b)
{
	int		size;

	size = ft_lstsize(*lst_a);
	if (size == 5)
	{
		search(lst_a, min_elem);
		pb(lst_a, lst_b);
	}
	search(lst_a, max_elem);
	pb(lst_a, lst_b);
	while (ft_lstsize(*lst_a) != 3)
		pb(lst_a, lst_b);
	size_3(lst_a);
	pa(lst_a, lst_b);
	ra(lst_a);
	if (size == 5)
		pa(lst_a, lst_b);
}
