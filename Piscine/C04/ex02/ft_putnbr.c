/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 05:22:36 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/25 15:50:05 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char char_nb)
{
	write(1, &char_nb, 1);
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
/*
int	main (void)
{
	int	a;
	a = 123;
	ft_putnbr(a);
	return (0);
}*/
