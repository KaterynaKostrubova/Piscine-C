/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 19:08:02 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/23 19:34:16 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_btree.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *node;

	node = 0;
	node = (t_btree*)malloc(sizeof(t_btree));
	if (node)
	{
		node->left = 0;
		node->right = 0;
		node->item = item;
	}
	return (node);
}
