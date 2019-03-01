/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 11:23:36 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/09 11:37:44 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strrev(char *str)
{
	char ch;
	char *begin;
	char *end;

	begin = str;
	end = str;
	while (*end)
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}
	return (str);
}
