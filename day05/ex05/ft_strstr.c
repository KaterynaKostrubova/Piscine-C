/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:36:33 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/13 14:40:19 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (src[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (src[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (src + i);
		i++;
	}
	return (0);
}
