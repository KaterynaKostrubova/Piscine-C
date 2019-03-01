/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:31:15 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/14 16:05:27 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str++));
	return (*str);
}

int		main(int argc, char **argv)
{
	ft_putstr(argv[argc * 0]);
	ft_putchar('\n');
	return (0);
}
