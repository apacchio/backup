/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 01:09:00 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/18 02:56:11 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{	
	if (index  == 0)
		return (0);
	if (index == 1)
		return (1);
	return (((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2))));
}

#include <stdio.h>

int		main()
{
	int index;
	index = 7;
	printf("%d\n", ft_fibonacci(index));
}

