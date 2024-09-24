/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:18:16 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/25 16:35:10 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[z] != '\0')
	{
		dest[i + z] = src[z];
		z++;
	}
	dest[i + z] = '\0';
	return (dest);
}
/*
int main (void)
{
    char    dest[12] = "Paco";
    char    *src = "Salas";
    ft_strcat(dest, src);
    return (0);
}*/
