/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:23:42 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/15 20:03:04 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	which_way(t_list *lst_b, int max_el, int i, int counter)
{
	int	z;
	int	*num;

	counter = 0;
	num = malloc(sizeof(int) * (i + 1));
	if (!num)
		return (0);
	while (lst_b)
	{
		num[counter] = lst_b->index;
		lst_b = lst_b->next;
		counter++;
	}
	z = i;
	while (num[i] != max_el)
		i--;
	z = z - i;
	i = 0;
	while (num[i] != max_el)
		i++;
	free(num);
	if (z < i)
		return (1);
	return (0);
}

void	return_to_a(t_list **lst_a, t_list **lst_b)
{
	while ((*lst_b) != NULL)
	{
		if (!lst_b)
			break ;
		if ((*lst_b)->index != max_elem(*lst_b)
			&& !which_way(*lst_b, max_elem(*lst_b), ft_lstsize(*lst_b), 0))
			rb(lst_b);
		else if ((*lst_b)->index != max_elem(*lst_b)
			&& which_way(*lst_b, max_elem(*lst_b), ft_lstsize(*lst_b), 0))
			rrb(lst_b);
		else if ((*lst_b)->index == max_elem(*lst_b))
			pa(lst_a, lst_b);
	}
}

void	big_sort(t_list **lst_a, t_list **lst_b, int k)
{
	int	l;

	l = 0;
	while ((*lst_a) != NULL)
	{
		if (l > 1 && (*lst_a)->index <= l)
		{
			pb(lst_a, lst_b);
			rb(lst_b);
			l++;
		}
		else if ((*lst_a)->index <= l + k)
		{
			pb(lst_a, lst_b);
			l++;
		}
		else if ((*lst_a)->index >= l)
			ra(lst_a);
	}
	return_to_a(lst_a, lst_b);
}
