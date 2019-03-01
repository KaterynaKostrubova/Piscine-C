/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:32:03 by mpetruno          #+#    #+#             */
/*   Updated: 2018/02/25 15:11:06 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	char	reverse[10];
	int		n;

	n = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = -(nb / 10);
			reverse[n++] = 8;
		}
		else
			nb = -nb;
	}
	while (nb >= 10)
	{
		reverse[n++] = nb % 10;
		nb = nb / 10;
	}
	reverse[n++] = nb;
	while (--n >= 0)
		ft_putchar((char)(reverse[n] + 48));
}
