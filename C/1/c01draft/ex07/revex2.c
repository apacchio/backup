/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 00:07:00 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/10 23:02:16 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_rev_int_tab(int *tab, int size)
{
	int herve;
	int fwd;
	int t;

	fwd = 0;
	herve = size - 1;
	while (fwd < herve)
	{
		t = tab[fwd];
		tab[fwd] = tab[herve];
		tab[herve] = t;
		fwd++;
		herve--;
	}
}

int		main()
{
	int fwd = 0;
	int size = 4;
	int tab[] = {2, 0, 1, 9};
	
	ft_rev_int_tab(tab, size);
	while (fwd < size)
	{
		printf("%d, ", tab[fwd]);
		fwd++;
	}
	return (0);
}
