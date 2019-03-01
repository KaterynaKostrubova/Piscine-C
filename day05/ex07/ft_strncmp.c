/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 17:07:59 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/13 20:07:20 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 1;
	while (*s1++ == *s2++)
	{
		if (i >= n)
			return (0);
		if ((*s1 == '\0') && (*s2 == '\0'))
			return (0);
		i++;
	}
	return (*--s1 - *--s2);
}
