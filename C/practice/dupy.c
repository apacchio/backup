/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dupy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:36:51 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 10:47:47 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		fsize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*codepy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
		return (tmp);
}

char	*dupy(char *src)
{
	int		size;
	char	*dest;

	size = fsize(src) + 1;
	if (!(dest = malloc(sizeof(char) * size)))
		return (0);
	codepy(dest, src);
	return (dest);
}

int		main(int argc, char **argv)
{
	(void) argc;
	char *src = argv[1];

	printf("%s\n", dupy(src));
	printf("%s\n", strdup(src));
}
	
