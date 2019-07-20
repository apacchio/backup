/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 06:11:01 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/18 07:05:43 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	i = 2;

	if (nb < 2)
		return (0);
	while (i <= nb / i)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

#include <stdio.h>

int		main()
{
	int nb;
	nb = 9;
	printf("%d\n", ft_is_prime(nb));
}
