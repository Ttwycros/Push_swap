/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:14:29 by ttwycros          #+#    #+#             */
/*   Updated: 2022/03/05 18:59:00 by ttwycros         ###   ########.fr       */
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
		printf("penis %d\n",lst->content);
		lst = lst->next;
	}
}

// typedef struct s_list {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

int	main(int argc, char	**argv)
{
	t_list	*lst;
	int		list_size;
	int		i;

	i = 0;
	if (argc < 2)
		error_message("No numbers");
	while (++i < argc)
		create_list(argv[i],&lst);
	check_dup(lst);
	if (sorted(lst))
		succes_exit(&lst);
list_print(lst);
	list_size = ft_lstsize(lst);
printf("list size = %d\n", list_size);
//выбор в зависимости от размера метода сортировки


	return (0);
}