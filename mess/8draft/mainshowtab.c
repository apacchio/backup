/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 05:36:13 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/24 09:25:54 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int div;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		div = nb % 10 + 48;
		ft_putnbr(nb / 10);
		write(1, &div, 1);
	}
	if (nb < 10)
	{
		div = nb + 48;
		write(1, &div, 1);
		return ;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	i = 0;

	struct s_stock_str *tab = ft_strs_to_tab(ac, av);

	show_tab(tab);
}
