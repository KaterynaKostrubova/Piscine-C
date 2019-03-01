/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:44:42 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/17 14:34:03 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE         1
# define FALSE        0
# define SUCCESS      0
# define EVEN_MSG     "I have an even number of arguments.\n"
# define ODD_MSG      "I have an odd number of arguments.\n"
# define EVEN(nbr)     (!(nbr % 2))

typedef int		t_bool;
#endif
