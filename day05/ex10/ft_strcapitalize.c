/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 21:11:23 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/13 21:11:45 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123 && flag == 0)
		{
			str[i] -= 32;
			flag = 1;
		}
		else if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		else if (str[i] < 97 || str[i] > 122)
			flag = 0;
		i++;
	}
	return (str);
}
