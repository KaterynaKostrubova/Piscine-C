/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:32:47 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/20 14:32:52 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	do_op(char **argv)
{
	int	a;
	int	b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '-' && argv[2][1] == '\0')
		ft_putnbr(a - b);
	else if (argv[2][0] == '+' && argv[2][1] == '\0')
		ft_putnbr(a + b);
	else if (argv[2][0] == '*' && argv[2][1] == '\0')
		ft_putnbr(a * b);
	else if (argv[2][0] == '/' && argv[2][1] == '\0')
		ft_putnbr(a / b);
	else if (argv[2][0] == '%' && argv[2][1] == '\0')
		ft_putnbr(a % b);
	else
		write(1, "0", 1);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int b;

	if (argc == 4)
	{
		b = ft_atoi(argv[3]);
		if (argv[2][0] == '/' && b == 0)
		{
			write(1, "Stop : division by zero", 23);
			ft_putchar('\n');
		}
		else if (argv[2][0] == '%' && b == 0)
		{
			write(1, "Stop : modulo by zero", 21);
			ft_putchar('\n');
		}
		else
			do_op(argv);
		return (0);
	}
}
