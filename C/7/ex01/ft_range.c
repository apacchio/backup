/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:10:54 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 01:25:45 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int nav;

	nav = 0;
	if (min >= max)
		return (NULL);
	if (!(array = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (max > min)
		array[nav++] = min++;
	return (array);
}
