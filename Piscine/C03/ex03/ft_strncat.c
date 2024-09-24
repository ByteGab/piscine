/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:37:01 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/25 17:56:26 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

/*void    ft_write(char *dest)
{
    int i;
    i = 0;
    while (dest[i] != '\0')
    {
        write(1, &dest[i], 1);
        i++;
    }
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[z] != '\0' && z < nb)
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
    ft_write(dest);
    return (0);
}*/
