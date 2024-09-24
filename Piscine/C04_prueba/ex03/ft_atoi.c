/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:52:47 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/25 12:13:00 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * sign);
}
