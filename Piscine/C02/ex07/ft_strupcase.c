/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:44:10 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 20:42:22 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "holaL";
	char	str3[] = "hiuefg";
	char	*str1;
	char	*str2;

	str1 = ft_strupcase(str);
        str2 = ft_strupcase(str3);
	write(1, str1, 5);
	write(1, str2, 6);
	return (0);
}*/
