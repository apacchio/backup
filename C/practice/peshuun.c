/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peshuun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:07:40 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/22 22:07:18 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_peshuun(char *str, char r, char b)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if ( str[i] == r)
			str[i] = b;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc == 4)
	{
		ft_peshuun(str, *argv[2], *argv[3]);
		while (*str)
		{
			write(1, &(*str), 1);
			str++;
		}
	}
	write (1,"\n", 1);
	return (0);	
}

