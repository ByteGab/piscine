/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:01:28 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 20:42:57 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
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

	str1 = ft_strlowcase(str);
	str2 = ft_strlowcase(str3);
	write(1, str1, 5);
	write(1, str2, 6);
	return (0);
}
*/
