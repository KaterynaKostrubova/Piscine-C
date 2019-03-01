/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 21:22:04 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/10 21:26:05 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_next_prime_2(int *i, int *nb, int *p)
{
	*i = 5;
	while (*i < (*nb / 2))
	{
		if ((*nb % *i) == 0)
		{
			(*nb)++;
			*p = 1;
			break ;
		}
		*i = *i + 6;
	}
	*i = 7;
	if (*p == 0)
		while (*i < (*nb / 2))
		{
			if ((*nb % *i) == 0)
			{
				(*nb)++;
				*p = 1;
				break ;
			}
			*i = *i + 6;
		}
}

int		ft_find_next_prime(int nb)
{
	int i;
	int p;

	if (nb <= 2)
		return (2);
	while ('1' == '1')
	{
		p = 0;
		if (nb == 3)
			return (3);
		if ((nb <= 1) || ((nb % 2) == 0) || ((nb % 3) == 0))
		{
			nb++;
			continue;
		}
		ft_find_next_prime_2(&i, &nb, &p);
		if (p == 1)
			continue;
		return (nb);
	}
}
