/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 12:28:55 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/10 20:30:44 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
