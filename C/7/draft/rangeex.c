/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:10:54 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/21 01:22:42 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int		main()
{
	int min = -2147483647;
	int max = -1;
	int nav = 0; 
	int *array = ft_range(min, max);

	while(max > min)
	{
		printf("%d\n", array[nav++]);
		min++;
	}

}
