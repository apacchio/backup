/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onlyone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 07:31:09 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/22 08:11:34 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char w)
{
	write(1, &w, 1);
}

void	ft_putstr(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		ft_write(str[s]);
		s++;
	}
}

int		main(int argc, char **argv)
{
	int n;
	n = 1;

	if (argc > 1)
	{
		ft_putstr(argv[1]);
	}
	ft_write('\n');	
	return (0);
}
