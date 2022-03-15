/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:46:57 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/15 19:36:29 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubl_sort(int **lst_temp, int list_size, int i, int j)
{
	int	temp;
	int	*lst;

	lst = *lst_temp;
	if (!lst || !list_size)
	{
		lst = 0;
		return ;
	}
	temp = 0;
	while (i < list_size - 1)
	{
		j = list_size - 1;
		while (j > i)
		{
			if (lst[j - 1] > lst[j])
			{
				temp = lst[j - 1];
				lst[j - 1] = lst[j];
				lst[j] = temp;
			}
			j--;
		}
		i++;
	}
}

int	index_chr(int *num, int num2, int i)
{
	while (num[i] != num2)
		i++;
	return (i);
}

void	lst_to_arr_copy(t_list *lst, int **arr_content,
		int **arr_content_cpy, int list_size)
{
	int	*arr_content_temp;
	int	*arr_content_cpy_temp;
	int	i;

	arr_content_temp = *arr_content;
	arr_content_cpy_temp = *arr_content_cpy;
	if (!lst || !arr_content_temp)
	{
		*arr_content = 0;
		return ;
	}
	i = 0;
	while (lst)
	{
		arr_content_temp[i] = lst->content;
		lst = lst->next;
		i++;
	}
	i = -1;
	while (++i < list_size)
		arr_content_cpy_temp[i] = arr_content_temp[i];
}

void	add_index(t_list *lst, int list_size)
{
	int		*lst_cpy;
	int		*lst_index;
	t_list	*counter;
	int		i;

	lst_cpy = malloc(4 * list_size);
	lst_index = malloc(4 * list_size);
	if (!lst_cpy || !lst_index)
		error_message("malloc fail");
	lst_to_arr_copy(lst, &lst_cpy, &lst_index, list_size);
	bubl_sort(&lst_cpy, list_size, 0, 0);
	counter = lst;
	i = 0;
	while (counter)
	{
		counter->index = index_chr(lst_cpy, lst_index[i], 0);
		counter = counter->next;
		i++;
	}
	free(lst_cpy);
	free(lst_index);
}
