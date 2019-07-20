/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 04:45:32 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/18 06:05:07 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int root = 2;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (( nb > 1 && (root * root) < nb))
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}

#include <stdio.h>

int		main()
{
	int nb;

	nb = 25;
	printf("%d", ft_sqrt(nb));
}
