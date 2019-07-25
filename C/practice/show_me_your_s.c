/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_me_your_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 02:51:47 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/22 04:04:56 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_show_me_your_s(char *str)
{
	int i;;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 115)
		{;
			write(1, "SHMYS", 5);
			break;
		}
		i++;
	}
	if (str[i] == '\0')
		write(1, "tanguy est une pomme de terre", 29);

}	 

int		main(int argc, char **argv)
{
	(void) argc;
	if (argc == 2) 
		ft_show_me_your_s(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}

