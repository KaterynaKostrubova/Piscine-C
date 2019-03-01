/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:21:21 by mpetruno          #+#    #+#             */
/*   Updated: 2018/02/24 17:42:10 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*rush00(int x, int y)
{
	int		w;
	int		h;
	char	*s;
	char	*res;

	s = malloc(x * (y + 1) + 1);
	res = s;
	h = -1;
	while (++h < y && x > 0)
	{
		w = -1;
		while (++w < x)
			if ((w == 0 && h == 0) || (w == 0 && h == y - 1) ||
				(w == x - 1 && h == 0) || (w == x - 1 && h == y - 1))
				*s++ = 'o';
			else if (w == 0 || w == x - 1)
				*s++ = '|';
			else if (h == 0 || h == y - 1)
				*s++ = '-';
			else
				*s++ = ' ';
		*s++ = '\n';
	}
	*s = 0;
	return (res);
}

char	*rush01(int x, int y)
{
	int		w;
	int		h;
	char	*s;
	char	*res;

	s = malloc(x * (y + 1) + 1);
	res = s;
	h = -1;
	while (++h < y && x > 0)
	{
		w = -1;
		while (++w < x)
			if (w == 0 && h == 0)
				*s++ = '/';
			else if ((w == 0 && h == y - 1) || (w == x - 1 && h == 0))
				*s++ = '\\';
			else if (w == x - 1 && h == y - 1)
				*s++ = '/';
			else
				*s++ = (w == 0 || w == x - 1
						|| h == 0 || h == y - 1) ? '*' : ' ';
		*s++ = '\n';
	}
	*s = 0;
	return (res);
}

char	*rush02(int x, int y)
{
	int		w;
	int		h;
	char	*s;
	char	*res;

	s = malloc(x * (y + 1) + 1);
	res = s;
	h = -1;
	while (++h < y && x > 0)
	{
		w = -1;
		while (++w < x)
			if ((w == 0 || w == x - 1) && h == 0)
				*s++ = 'A';
			else if ((w == 0 || w == x - 1) && h == y - 1)
				*s++ = 'C';
			else
				*s++ = (w == 0 || w == x - 1
						|| h == 0 || h == y - 1) ? 'B' : ' ';
		*s++ = '\n';
	}
	*s = 0;
	return (res);
}

char	*rush03(int x, int y)
{
	int		w;
	int		h;
	char	*s;
	char	*res;

	s = malloc(x * (y + 1) + 1);
	res = s;
	h = -1;
	while (++h < y && x > 0)
	{
		w = -1;
		while (++w < x)
			if ((h == 0 || h == y - 1) && w == 0)
				*s++ = 'A';
			else if ((h == 0 || h == y - 1) && w == x - 1)
				*s++ = 'C';
			else
				*s++ = (w == 0 || w == x - 1
						|| h == 0 || h == y - 1) ? 'B' : ' ';
		*s++ = '\n';
	}
	*s = 0;
	return (res);
}

char	*rush04(int x, int y)
{
	int		w;
	int		h;
	char	*s;
	char	*res;

	s = malloc(x * (y + 1) + 1);
	res = s;
	h = -1;
	while (++h < y && x > 0)
	{
		w = -1;
		while (++w < x)
			if (w == 0 && h == 0)
				*s++ = 'A';
			else if ((w == 0 && h == y - 1) || (w == x - 1 && h == 0))
				*s++ = 'C';
			else if (w == x - 1 && h == y - 1)
				*s++ = 'A';
			else
				*s++ = (w == 0 || w == x - 1
						|| h == 0 || h == y - 1) ? 'B' : ' ';
		*s++ = '\n';
	}
	*s = 0;
	return (res);
}
