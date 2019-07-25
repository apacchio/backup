/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 01:02:06 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 01:26:44 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int nav;

	nav = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(array = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (nav < max - min)
	{
		array[nav] = min + nav;
		nav++;
	}
	*range = array;
	return (max - min);
}
