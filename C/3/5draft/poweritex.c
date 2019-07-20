/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 23:19:28 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/18 00:24:56 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int f;

	f = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != i) 
	{
		i++;
		f = nb * f;;
	}
	return (f);
}

#include <stdio.h>

int		main()
{
	int nb;
	int power;

	nb = 7;
	power = -3;
	printf("%d\n", ft_iterative_power(nb, power));
}

