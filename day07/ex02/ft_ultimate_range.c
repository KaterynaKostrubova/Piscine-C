/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:07:36 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/15 17:31:21 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*res;
	int		j;
	int		count;

	count = (max - min);
	if (min >= max)
		*range = 0;
	*range = (int*)malloc(4 * count);
	j = 0;
	while (j < count)
	{
		(*range)[j] = min + j;
		j++;
	}
	return (j);
}
