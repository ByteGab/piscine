/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:46:38 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/19 11:32:08 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	digito;

	digito = '0';
	while (digito <= '9')
	{
		write(1, &digito, 1);
		digito++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
