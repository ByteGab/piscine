/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:20:37 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/23 00:50:54 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i - 1] < '0' || str[i - 1] > '9')
			&& (str[i - 1] < 'a'
				|| str[i - 1] > 'z')
			&& (str[i - 1] < 'A'
				|| str[i - 1] > 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] =  " salut, comMent tu vas ? 42mots quarante-deux; 
	cinquante+et+n";
	char	*str1;

	str1 = ft_strcapitalize(str);

	write(1, str1, 78);

	return (0);
        
        printf("%s", ft_strcapitalize(str));
}
*/
