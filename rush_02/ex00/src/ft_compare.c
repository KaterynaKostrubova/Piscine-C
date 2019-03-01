/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 21:33:00 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/25 16:31:33 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush0.h"
#include "ft_output.h"
#include "ft_dimensions.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	return (*--s1 - *--s2);
}

void	ft_print(int i, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

int		ft_compare(char *str)
{
	int	i;
	int	flag;
	int x;
	int y;

	x = get_width(str);
	y = get_length(str);
	i = 0;
	flag = 0;
	while (i < 5)
	{
		if (ft_strcmp(str, get_rush(i, x, y)) == 0)
		{
			if (flag != 0)
				ft_putstr(" || ");
			ft_print(i, x, y);
			flag++;
		}
		i++;
	}
	return (flag);
}
