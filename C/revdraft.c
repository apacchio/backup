/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 02:51:18 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/19 05:33:26 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char w)
{
	write(1, &w, 1);
}

int		ft_rev(char *str, int size)
{
	int  bwd;
	int  fwd;
	int  s;

	fwd = 0;
	bwd = size - 1;
	while (fwd < bwd)
	{
		s = str[fwd];
		str[fwd] = str[bwd];
		str[bwd] = s;
		fwd++;
		bwd--;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int n;
	int size;
	
	n = 1;
	while (argc > n)
	{
		ft_write(ft_rev(argv[n], size));
		ft_write('\n');
		n++;
	}
	return (0);	
}
