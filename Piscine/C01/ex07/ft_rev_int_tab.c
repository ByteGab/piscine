/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:48:28 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/08 15:29:51 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = size -1;
	while (a < size / 2)
	{
		c = tab[a];
		tab[a] = tab[b];
		tab[b] = c;
		a++;
		b--;
	}
}
