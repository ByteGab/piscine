/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:09:20 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 20:37:57 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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

	str = "gFshgdd";
	str1 = ft_str_is_lowercase(str) + '0';
	write(1, &str1, 1);
	return (0);
}*/
