/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:05:28 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 23:26:42 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	str1;
	char	*str;

	str = "hd4Jh";
	str1 = ft_str_is_alpha(str) + '0';
	write(1, &str1, 1);
	return (0);
}
*/
