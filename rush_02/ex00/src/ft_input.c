/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_input.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylesik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 17:47:48 by ylesik            #+#    #+#             */
/*   Updated: 2018/02/25 18:27:13 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <ft_input.h>

#define BUFF_SIZE 20480

char	*read_input(void)
{
	char	buff[BUFF_SIZE + 1];
	char	*res;
	int		i;

	i = 0;
	while (read(0, &buff[i], 1))
		i++;
	buff[i] = 0;
	if (i == 0)
		return (0);
	res = buff;
	if (is_equal_length(buff))
		return (res);
	else
		return (0);
}

int		is_equal_length(char *c)
{
	int i;
	int j;
	int flag;
	int count;

	i = -1;
	j = 0;
	flag = 0;
	count = -1;
	while (c[++i] != 0 && ++count > -1)
	{
		if (c[i] == '\n')
		{
			if (j != count)
			{
				j = count;
				flag++;
			}
			count = -1;
		}
	}
	if (flag == 1)
		return (j);
	else
		return (0);
}

int		get_length(char *c)
{
	int n;
	int i;

	i = 0;
	n = 0;
	while (c[i] != 0)
	{
		if (c[i] == '\n')
		{
			n++;
		}
		i++;
	}
	return (n);
}

int		get_width(char *c)
{
	int i;

	i = 0;
	while (c[i] != 0)
	{
		if (c[i] == '\n')
		{
			return (i);
		}
		i++;
	}
	return (0);
}
