/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 22:21:34 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/08 11:44:54 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;

	i = 0;
	while (i <= 9899)
	{
		if (i / 100 >= i % 100)
		{
			i++;
			continue;
		}
		ft_putchar(48 + i / 1000);
		ft_putchar(48 + i / 100 % 10);
		ft_putchar(' ');
		ft_putchar(48 + i % 100 / 10);
		ft_putchar(48 + i % 10);
		if (i != 9899)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
}
