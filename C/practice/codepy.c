/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codepy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 08:51:30 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 09:13:33 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*codepy(char *src, char *dest)
{
	char *tmp;

	tmp = dest;	
	while (*src)
		 *dest++ = *src++;
	*dest = '\0';
	return (tmp);
}

#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	(void) argc;
	char *src = argv[1];
	char *dest  = argv[2];

	printf("%s\n", codepy(src, dest));
	printf("%s\n", strcpy(src, dest));
}
