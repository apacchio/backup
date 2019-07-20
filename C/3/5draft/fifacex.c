/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 05:37:20 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/17 07:25:00 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i;
	int f;

	i = 1;
	f = 1;

	while (i <=  nb)
	{
		f = f * i;
		i++;
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (f);	
}

#include <stdio.h>

int		main()
{
	int nb;

	nb = 0;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
