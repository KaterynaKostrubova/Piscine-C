/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 12:01:33 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/18 12:09:00 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_cmpstr(char *str1, char *str2)
{
	if (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
		return (ft_cmpstr(str1 + 1, str2 + 1));
	if (*str1 == *str2 && *str1 == '\0' && *str2 == '\0')
		return (1);
	return (0);
}

int		find(char *s1, char *s2)
{
	while (*s1++ != '\0')
	{
		if (*s2 == *s1)
			return (1);
	}
	return (0);
}

int		match(char *s1, char *s2)
{
	if (find(s2, "*") == 0)
		return (ft_cmpstr(s1, s2));
	while (*s2 != '\0')
	{
		if (*s2 == *s1)
		{
			s2++;
			s1++;
		}
		else if (*s2 == '*')
			s2++;
		else
		{
			if (find(s1, s2) == 0)
				return (0);
			s2++;
		}
	}
	return (1);
}
