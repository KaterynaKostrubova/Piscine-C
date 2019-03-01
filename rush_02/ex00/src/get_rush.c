/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rush0X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 20:32:38 by mpetruno          #+#    #+#             */
/*   Updated: 2018/02/24 22:18:09 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush0.h"

char	*get_rush(int index, int x, int y)
{
	char *(*(rush[5]))(int, int);

	rush[0] = &rush00;
	rush[1] = &rush01;
	rush[2] = &rush02;
	rush[3] = &rush03;
	rush[4] = &rush04;
	return (rush[index](x, y));
}
