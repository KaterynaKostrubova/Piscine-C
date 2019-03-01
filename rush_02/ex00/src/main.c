/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:12:22 by mpetruno          #+#    #+#             */
/*   Updated: 2018/02/25 13:36:21 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_input.h"
#include "ft_output.h"
#include "rush2.h"

int	main(void)
{
	char	*inp;

	inp = read_input();
	if (inp && ft_compare(inp))
		ft_putstr("\n");
	else
		ft_putstr("aucune\n");
	return (0);
}
