/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:58:05 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/22 16:11:13 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_display_file(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)) != 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
