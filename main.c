/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:14:29 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/15 19:33:52 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char	**argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	int		list_size;
	int		i;

	i = 0;
	if (argc < 2)
		exit (1);
	while (++i < argc)
		create_list(argv[i], &lst_a);
	check_dup(lst_a);
	if (sorted(lst_a))
		succes_exit(&lst_a);
	list_size = ft_lstsize(lst_a);
	add_index(lst_a, list_size);
	if (list_size <= 3)
		size_3(&lst_a);
	else if (list_size <= 5)
		size_45(&lst_a, &lst_b);
	else if (list_size <= 100)
		big_sort(&lst_a, &lst_b, 15);
	else if (list_size <= 500)
		big_sort(&lst_a, &lst_b, 30);
	ft_lstclear(&lst_a, delete_content);
	return (0);
}

/*
void	list_print(t_list	*lst)
{
	if (!lst)
	{
		printf("None \n");
	}
	while (lst)
	{
		printf("content	%3d index	%d\n", lst->content, lst->index);
		lst = lst->next;
	}
}
*/