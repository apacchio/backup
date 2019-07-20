/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 00:07:00 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/10 17:34:31 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
