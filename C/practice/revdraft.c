/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 02:51:18 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/24 00:45:01 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return(s);
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
	(void) argc;
	char *str = argv[1];

	if (argc == 2)
	{   
		int size = ft_strlen(argv[1]);

		ft_rev(str, size);
		while (*str)
		{
			write(1, &(*str), 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);	
}
