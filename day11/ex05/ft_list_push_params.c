/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:37:20 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/21 15:09:47 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*new_link(t_list *list, void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->data = data;
		new->next = list;
	}
	return (new);
}

t_list		*ft_list_push_params(int argc, char **argv)
{
	t_list	*list;
	int		i;

	i = 2;
	if (argc == 1)
		return (0);
	list = ft_create_elem(argv[1]);
	while (i < ac)
	{
		list = new_link(list, argv[i]);
		i++;
	}
	return (list);
}
