/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 00:07:00 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/10 17:24:46 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_rev_int_tab(int *tab, int size)
{
	int herve;
	int fwd;
	int t;

	fwd = 0;
	herve = size;
	while (fwd <= herve)
	{
		herve--;
		t = tab[fwd];
		tab[fwd] = tab[herve];
		tab[herve] = t;
		fwd++;
	}
}

int		main()
{
	int tab[3] = {5, 2, 1};
	ft_rev_int_tab(tab, 3);
	printf("%d, ", tab[0]);
	printf("%d, ", tab[1]);
	printf("%d", tab[2]);
	return (0);
}
