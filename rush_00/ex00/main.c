/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 13:11:12 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/11 23:20:03 by aroi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int		main(void)
{
	rush(5, 2);
	rush(5, 1);
	rush(1, 5);
	rush(0, 0);
	rush(3, 0);
	rush(0, 3);
	rush(-5, -5);
	rush(104, 32);
	return (0);
}
