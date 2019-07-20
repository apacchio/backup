/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 07:21:17 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/19 09:26:48 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char w)
{
	write(1, &w, 1);
}

void	ft_rev_print(int *tab, int size)
{
	int i;
	printf("%d", size);
	i = size;
	while (i >= 0)
	{
		ft_write(tab[i]);
		i--;
	}

} 

int		ft_strlen(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return (s);
}

int		main(int ac, char **av)
{
	ft_rev_print(av[1], ft_strlen(av[1]));
	return(0);	
}

	















/* Write a program that takes a string and displays it in reverse followed by a newline
 * if number of parametre is not 1, the program displays a new line
 * 
 * ex ./rev_print "zaz"
zaz$

.rev_print "dub0 a POIL"
LIOP a 0bud$

rev_print 
$*/


