/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 13:16:52 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/11 22:00:12 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (++i <= y)
	{
		while (++j <= x)
		{
			if (i == 1 && j == 1)
				ft_putchar('/');
			else if ((i == y && j == 1) || (i == 1 && j == x))
				ft_putchar('\\');
			else if (i == y && j == x)
				ft_putchar('/');
			else if (i == 1 || j == 1 || i == y || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		j = 0;
	}
}
