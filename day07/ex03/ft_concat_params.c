/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 20:34:12 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/15 20:39:59 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			j++;
		i++;
	}
	return (j);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*r;
	int		l;
	int		i;
	int		j;

	if ((r = malloc(len(argc, argv))) == NULL)
		return (NULL);
	i = 1;
	l = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			r[l++] = argv[i][j++];
		if (i < argc - 1)
			r[l++] = '\n';
		i++;
	}
	r[l] = '\0';
	return (r);
}
