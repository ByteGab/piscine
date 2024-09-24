/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:17:26 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/19 11:35:46 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	resultado;

	if (n < 0)
	{
		resultado = 'N';
		write(1, &resultado, 1);
	}
	else
	{
		resultado = 'P';
		write(1, &resultado, 1);
	}
}

int	main(void)
{
	int	a;
	int	b;

	a = -21;
	b = 12;
	ft_is_negative(a);
	ft_is_negative(b);
	return (0);
}
