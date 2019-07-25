/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssssssssssssssssss.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:36:11 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/22 10:41:37 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ssssssssssssss(char *str)
{	
	int i;
	int count;

	i = 0;
	while ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
	{
		if((str[i] >= 97 && str[i] <= 122))
			count = str[i] - 96;
		else
			count = str[i] - 64;
		while (count > 0)
		{
			write(1, &str[i], 1);
			count--;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_ssssssssssssss(argv[1]);
	else
		write(1, "\n", 1);
}
