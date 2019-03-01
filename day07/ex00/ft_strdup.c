/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 12:08:09 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/15 12:51:50 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*res;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	res = (char*)malloc(sizeof(*res) * size);
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
