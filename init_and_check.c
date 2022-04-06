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

void	ft_funk(const char *number)
{
	char			*str;
	long long int	i;
	int				flag;

	flag = 0;
	str = (char *) number;
	i = 0;
	while (str + i && (*(str + i) == '\n' || *(str + i) == '\t'
			|| *(str + i) == '\v' || *(str + i) == '\f' || *(str + i) == '\r'
			|| *(str + i) == ' '))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		flag++;
		i++;
	}
	if (str[i])
		error_message("Some arguments aren't integers");
	else
		if (flag == 0)
			error_message("Some arguments aren't integers");
}

int	check_str(char *str)
{
	long long int	i;
	long long int	temp;

	i = 0;
	if (!*str)
		error_message("No string");
	ft_funk(str);
	temp = ft_atoi_long(str);
	if (temp < INT_MIN || temp > INT_MAX)
		error_message("Some arguments are bigger than an integer");
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
