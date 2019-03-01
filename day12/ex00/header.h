/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:27:45 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/22 13:29:24 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>

# define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_display_file(char *file);

#endif
