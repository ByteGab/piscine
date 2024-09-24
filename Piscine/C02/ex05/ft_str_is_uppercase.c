/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:37:40 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 20:40:45 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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
	char	str2;
	char	*str3;

	str = "gFshgdd";
	str1 = ft_str_is_uppercase(str) + '0';
	str3 = "GHDJDJ";
	str2 = ft_str_is_uppercase(str3) + '0';
	write(1, &str1, 1);
	write(1, &str2, 1);
	return (0);
}*/
