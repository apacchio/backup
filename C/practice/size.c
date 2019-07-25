/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:16:10 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 09:20:27 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	str[i] = '\0';
	return (i);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	(void) argc;
	char *str = argv[1];

	printf("%d\n", size(str));
}
