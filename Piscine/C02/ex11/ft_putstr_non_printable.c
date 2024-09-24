/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gabriel@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:21:36 by gafreire          #+#    #+#             */
/*   Updated: 2024/07/22 20:07:26 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char str)
{
	write (1, &str, 1);
}

int	ft_char_is_printable(char str)
{
	if (str >= 32 && str <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar
				("0123456789abcdef"[(unsigned char)
					str[i] / 16]);
			ft_putchar
				("0123456789abcdef"[(unsigned char)
					str[i] % 16]);
		}
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
