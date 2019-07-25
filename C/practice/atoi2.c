/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 03:28:26 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 10:22:23 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int n;
	int p;

	n = 0;
	nb = 0;
	p = 0;

	while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == 43)
	{
		p++;
		str++;
	}
	if (*str == 45)
	{
		n++;
		str++;
	}
	while (*str >= 48 && *str <= 57 | *str == 43)
	{
		nb = nb * 10;
		nb = nb + (*str - 48);
		str++;
	}
	if (n == 1)
		return (-nb);
	if (n == 0)
		return (nb);
	if (n > 1 ||  p > 1)
		return (0);
	return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	(void) argc;
	char *str = argv[1];

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
