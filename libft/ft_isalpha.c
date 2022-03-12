/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttwycros <ttwycros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:06:22 by ttwycros          #+#    #+#             */
/*   Updated: 2021/10/16 21:06:23 by ttwycros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch)
{
	if (ch > 64 && ch < 91)
		return (1);
	if (ch > 96 && ch < 123)
		return (1);
	return (0);
}
