/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:46:14 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 23:55:30 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1;
	char	*str;

	str = "fssggsg6009";
	str1 = ft_str_is_numeric(str) + '0';
	write(1, &str1, 1);
	return (0);
}*/
