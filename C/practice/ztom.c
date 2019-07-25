/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ztom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 22:51:42 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/23 23:14:44 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_ztom(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 77)
			str[i] += 13;
		else if (str[i] >= 78 && str[i] <= 90)
			str[i] -= 13;
		else if (str[i] >= 97 && str[i] <= 109)
			str[i] += 13;
		else if (str[i] >= 110 && str[i] <= 122)
			str[i] -= 13;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc == 2)
	{
		ft_ztom(str);
		while (*str)
		{
			write(1, &(*str), 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
