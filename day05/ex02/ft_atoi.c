/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 19:00:11 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/09 19:27:10 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int result;
	int negnbr;

	result = 0;
	negnbr = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\v') || (str[i] == ' ') ||
			(str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negnbr = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (negnbr == 1)
		return (-result);
	else
		return (result);
}
