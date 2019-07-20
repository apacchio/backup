/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:42:20 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/09 23:15:47 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char w)
{
	write (1, &w, 1);
}

void	ft_putstr(char *str)
{
	int v;

	v = 0;

	while (str[v] != '\0')
	{
		ft_write(str[v]);
		v++;
	}	
		
}

int		main()
{
	ft_putstr("string");
	return (0);	
	
}
