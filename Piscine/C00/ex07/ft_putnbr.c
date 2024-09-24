/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:35:39 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/19 11:39:45 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char char_nb)
{
	write (1, &char_nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_write('-');
		ft_write('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_write('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_write(nb + '0');
	}
}

int	main (void)
{
	int	a;
	a = 123;

	ft_putnbr(a);
	return (0);
}
