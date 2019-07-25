/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:53:55 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/24 09:19:46 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int					ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char				*ft_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}

char				*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src) + 1;
	dest = malloc(sizeof(char) * len);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
