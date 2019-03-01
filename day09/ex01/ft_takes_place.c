/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 19:32:19 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/15 19:32:42 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 24)
			hour = 0;
		if (hour == 23)
			printf("%d.00 P.M. AND %d.00 A.M.\n", (hour % 12), (hour % 12) + 1);
		else if (hour == 11)
			printf("%d.00 A.M. AND %d.00 P.M.\n", hour, hour + 1);
		else if (hour >= 12)
			printf("%d.00 P.M. AND %d.00 P.M.\n", (hour % 12), (hour % 12) + 1);
		else
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	}
}
