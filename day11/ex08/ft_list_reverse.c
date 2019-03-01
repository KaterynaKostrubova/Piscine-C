/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 13:30:28 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/21 13:35:22 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*t1;
	t_list	*t2;

	list = *begin_list;
	if (!list || !(list->next))
		return ;
	t1 = list->next;
	t2 = tmp->next;
	list->next = 0;
	t1->next = list;
	while (t1)
	{
		list = t1;
		t1 = t2;
		t2 = t2->next;
		t1->next = list;
	}
	*begin_list = t1;
}
