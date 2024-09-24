/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:36:51 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/09 12:51:53 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	z;
	int	change;

	a = 0;
	z = 0;
	change = 0;
	while (a < size -1)
	{
		while (z < size - a - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				change = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = tab[a];
			}
			z++;
		}
		a++;
	}
}
