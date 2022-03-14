/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:14:22 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/14 19:15:29 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(t_list	*lst)
{
	t_list	*temp;

	temp = lst;
	while (lst)
	{	
		temp = lst->next;
		while (temp)
		{
			if (lst->content == temp->content)
				error_message("duplicate numbers");
			temp = temp->next;
		}
		lst = lst->next;
	}
}

static int	check_str(char	*str)
{
	long long int	i;
	long long int	temp;

	i = 0;
	if (!*str)
		error_message("No string");
	while (str[i])
	{
		if (!ft_isdigit(*(str + i)) && *(str + i) != '-')
			error_message("False input (non digit/minus)");
		i++;
	}
	temp = ft_atoi_long(str);
	if (temp < INT_MIN || temp > INT_MAX)
		error_message("False input (int max/min)");
	return (temp);
}

void	create_list(char	*str, t_list	**lst)
{
	t_list	*p;
	int		temp;

	temp = check_str(str);
	if (!lst)
		*lst = ft_lstnew(temp);
	else
	{
		p = ft_lstnew(temp);
		ft_lstadd_back(lst, p);
	}
}
