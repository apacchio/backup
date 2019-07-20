/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 23:22:15 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/09 23:58:34 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char w)
{
	write (1, &w, 1);
}

int		ft_strlen(char *str)
{
	int v;

	v = 0;
	while (str[v] != '\0')
	{
		v++;
	}
	return (v);
}



int		main()
{	
	int vount;
	
	vount = ft_strlen("string");
	ft_write(vount + '0');
	return (0);
}
