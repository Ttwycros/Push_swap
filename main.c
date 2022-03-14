/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:14:29 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/14 20:31:41 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	list_print(t_list	*lst)
{
	if (!lst)
	{
		printf("Иди нахуй долбоеб \n");
	}
	while (lst)
	{
		printf("content	%d\n",lst->content);
		printf("index	%d\n",lst->index);
		lst = lst->next;
	}
}

// typedef struct s_list {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;
void	lst_to_arr_copy(t_list *lst, int **lst_cpy)
{
	int	*lst_temp;
	int	i;

	lst_temp = *lst_cpy;
	if (!lst || !lst_temp)
		return (0);
	i = 0;
	while (lst)
	{
		lst_temp[i] = lst->content;
		lst = lst->next;
		i++;
	}
}

int	do_int_arr(int **source, int **destination, int list_size)
{
	int	i;

	i = -1;
	while (++i < list_size)
		*destination[i] = *source[i];
}

int	bubl_sort(int **lst_temp, int list_size)
{
	int	j;
	int	i;
	int	temp;
	int	*lst;

	lst = *lst_temp;
	if (!lst || !list_size)
		return (0);
	i = 0;
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

void	add_index(t_list *lst, int list_size)
{
	int		*lst_cpy;
	int		*lst_index;
	t_list	*counter;

	lst_cpy = malloc(4 * list_size);
	lst_index = malloc(4 * list_size);
	if (!lst_cpy || !lst_index)
		error_message("malloc fail");
	lst_to_arr_copy(lst, &lst_cpy);
	arr_to_arr_copy(&lst_cpy, &lst_index, list_size);
	bubl_sort(&lst_cpy, list_size);
	counter = lst;
	while(counter)
	{
		counter = counter->next;
	}
	free(lst_cpy);
	free(lst_index);
}

int	main(int argc, char	**argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	int		list_size;
	int		i;

	i = 0;
	if (argc < 2)
		error_message("No numbers");
	while (++i < argc)
		create_list(argv[i],&lst_a);
	check_dup(lst_a);
	if (sorted(lst_a))
		succes_exit(&lst_a);
list_print(lst_a);
	list_size = ft_lstsize(lst_a);
	add_index(lst_a, list_size);
printf("list size = %d\n", list_size);
//выбор в зависимости от размера метода сортировки


	return (0);
}