/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pUsHeEn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 23:39:47 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/23 00:17:27 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pUsHeEn(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc ==2)
	{
		ft_pUsHeEn(str);
		while (*str)
		{
			write(1, &(*str), 1);
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}


