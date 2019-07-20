/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 07:26:37 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/17 19:08:23 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{	
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int		main()
{
	int nb;

	nb = 0;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}
