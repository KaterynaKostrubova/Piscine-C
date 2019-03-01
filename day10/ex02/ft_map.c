/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:20:09 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/19 16:22:39 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *cp;

	i = 0;
	cp = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		cp[i] = f(tab[i]);
		i++;
	}
	return (cp);
}
