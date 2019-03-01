/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 23:12:32 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/09 23:12:48 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tab[i] = tab[i] + tab[j];
				tab[j] = tab[i] - tab[j];
				tab[i] = tab[i] - tab[j];
			}
			j++;
		}
		i++;
	}
}
