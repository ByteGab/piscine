/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gabriel@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:10:44 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 20:00:07 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char src[] = "holagjga";
	char dest[] = "chaooo";

	printf("%d | %s", ft_strlcpy(dest, src, 12), dest);
}
*/
