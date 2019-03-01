/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:43:15 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/21 13:05:50 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	if (*begin_list)
	{
		while ((*begin_list)->next)
		{
			list = *begin_list;
			*begin_list = (*begin_list)->next;
			free(list);
		}
	}
	*begin_list = 0;
}
